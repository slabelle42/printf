/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:28:36 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/13 21:53:43 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int			printf_type(va_list *ap, t_specifiers *specs)
{
	if (specs->type == 'c')
		return (printf_unsigned_char(va_arg(*ap, unsigned int), specs));
	else if (specs->type == 's')
		return (printf_string(va_arg(*ap, char *), specs));
	else if (specs->type == 'p')
		return (printf_pointer(va_arg(*ap, unsigned long long), specs));
	else if (specs->type == 'x' || specs->type == 'X')
		return (printf_unsigned_hexa(va_arg(*ap, unsigned long long), specs));
	else if (specs->type == 'd' || specs->type == 'i')
		return (printf_signed_decimal(va_arg(*ap, int), specs));
	else if (specs->type == 'u')
		return (printf_unsigned_decimal(va_arg(*ap, unsigned int), specs));
	else if (specs->type == '%')
		return (printf_percent(specs));
	return (0);
}

static int			printf_parse(const char *format, va_list *ap,
					t_specifiers *specs)
{
	specs->j = specs->i;
	while (format[++(specs->j)])
		if (!(ft_strchr(".-0123456789*#+ ", format[specs->j])))
			break ;
	printf_flags(format, specs);
	if ((specs->width = printf_width_precision(format, ap, specs)) < 0)
		exit(-1);
	if (format[specs->i] == '.')
	{
		specs->flag_dot = 1;
		if ((specs->precision = printf_width_precision(format, ap, specs)) < -1)
			exit(-1);
	}
	if (ft_strchr("cspxXdiu%", format[specs->i]))
		specs->type = format[specs->i];
	return (printf_type(ap, specs));
}

static int			printf_input(const char *format, va_list *ap)
{
	int				i;
	int				printed;
	t_specifiers	*specs;

	i = -1;
	printed = 0;
	while (format[++i])
		if (format[i] != '%')
			printed += (int)ft_putchar_fd(format[i], 1);
		else if (format[i] == '%' && format[i + 1])
		{
			if (!(specs = printf_init_specifiers()))
				exit(-1);
			specs->i = i;
			printed += printf_parse(format, ap, specs);
			i = specs->i;
			free(specs);
		}
	return (printed);
}

int					ft_printf(const char *format, ...)
{
	const char		*format_cpy;
	va_list			ap;
	int				printed;

	if (!(format_cpy = ft_strdup(format)))
		return (0);
	va_start(ap, format);
	printed = 0;
	printed += printf_input(format_cpy, &ap);
	free((char *)format_cpy);
	va_end(ap);
	return (printed);
}
