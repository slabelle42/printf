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

static int			printf_type(va_list *ap, t_flags *flags,
					t_specifiers *specs)
{
	int				printed;
	
	printed = 0;
	if (specs->type == 'c')
		printed = printf_unsigned_char(va_arg(*ap , unsigned int), flags,
			specs);
	else if (specs->type == 's')
		printed = printf_string(va_arg(*ap , char *), flags, specs);
	else if (specs->type == 'd' || specs->type == 'i')
		printed = printf_signed_decimal(va_arg(*ap , int), flags, specs);
	else if (specs->type == 'u')
		printed = printf_unsigned_decimal(va_arg(*ap , unsigned int), flags,
			specs);
	else if (specs->type == '%')
		printed = printf_percent(flags, specs);
	return (printed);
}

static int			printf_parse(const char *format, va_list *ap,
					t_flags *flags, t_specifiers *specs)
{
	specs->j = specs->i;
	while (format[++(specs->j)])
		if (!(ft_strchr(".-0123456789*#+ ", format[specs->j])))
			break ;
	printf_flags(format, flags, specs);
	if ((specs->width = printf_width_precision(format, ap,
		flags, specs)) == -2)
		exit(-1);
	if (format[specs->i] == '.')
	{
		flags->dot = 1;
		if ((specs->precision = printf_width_precision(format, ap,
			flags, specs)) == -2)
			exit(-1);
	}
	if (ft_strchr("cspxXdiu%", format[specs->i]))
		specs->type = format[specs->i];
	return (printf_type(ap, flags, specs));
}

static int			printf_input(const char *format, va_list *ap)
{
	int				i;
	int				printed;
	t_flags			*flags;
	t_specifiers	*specs;

	i = -1;
	printed = 0;
	while (format[++i])
		if (format[i] != '%')
			printed += (int)ft_putchar_fd(format[i], 1);
		else if (format[i] == '%' && format[i + 1])
		{
			if (!(flags = printf_init_flags()))
				exit(-1);
			if (!(specs = printf_init_specs()))
				exit(-1);
			specs->i = i;
			printed += printf_parse(format, ap, flags, specs);
			i = specs->i;
			free(flags);
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
