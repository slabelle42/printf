/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2_width_precision.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:30:34 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/13 21:47:18 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_asterisk(int field, t_flags *flags)
{
	if (field < 0)
	{
		flags->minus = 1;
		flags->zero = 0;
		field = -field;
	}
	return (field);
}

int			printf_width_precision(const char *format, va_list *ap,
			t_flags *flags, t_specifiers *specs)
{
	int		start;
	int		end;
	int		len;
	char	*str_field;
	int		int_field;

	if (format[(specs->i)++] == '*')
		return (printf_asterisk(va_arg(*ap, int), flags));
	start = --(specs->i);
	while (ft_isdigit(format[specs->i]))
		(specs->i)++;
	end = specs->i;
	len = end - start;
	if (!(str_field = malloc(sizeof(char) * (len + 1))))
		return (-1);
	str_field[len] = '\0';
	while (end >= start)
		str_field[len--] = format[end--];
	int_field = ft_atoi(str_field);
	free(str_field);
	return (int_field);
}
