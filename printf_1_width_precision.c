/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_1_width_precision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:30:34 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/13 21:47:18 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_asterisk(int field, t_specifiers *specs)
{
	if (field < 0 && specs->flag_dot == 1)
		field = -1;
	else if (field < 0)
	{
		specs->flag_minus = 1;
		specs->flag_zero = 0;
		field = -field;
	}
	return (field);
}

int			printf_width_precision(const char *format, va_list *ap,
			t_specifiers *specs)
{
	int		start;
	int		end;
	int		len;
	char	*str_field;
	int		int_field;

	if (specs->flag_dot == 1)
		(specs->i)++;
	if (format[(specs->i)++] == '*')
		return (printf_asterisk(va_arg(*ap, int), specs));
	start = --(specs->i);
	while (ft_isdigit(format[specs->i]))
		(specs->i)++;
	end = specs->i;
	len = end - start;
	if (!(str_field = malloc(sizeof(char) * (len + 1))))
		return (-2);
	str_field[len] = '\0';
	while (end >= start)
		str_field[len--] = format[end--];
	int_field = ft_atoi(str_field);
	free(str_field);
	return (int_field);
}

int			printf_display_width_precision(int field, int minus, int zero)
{
	int		printed;

	printed = 0;
	while (field-- > minus)
	{
		if (zero)
			printed += ft_putchar_fd('0', 1);
		else
			printed += ft_putchar_fd(' ', 1);
	}
	return (printed);
}
