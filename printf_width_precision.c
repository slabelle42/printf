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

int			printf_width_precision(const char *format, t_flags,
			t_specifiers *specs)
{
	int		start;
	int		end;
	int		len;
	char	*str_value;
	int		int_value;

	if (format[(specs->i)++] == '*')
		return (-2);
	start = --(specs->i);
	while (ft_isdigit(format[specs->i]))
		(specs->i)++;
	end = specs->i;
	len = end - start;
	if (!(str_value = malloc(sizeof(char) * (len + 1))))
		return (-1);
	str_value[len] = '\0';
	while (end >= start)
		str_value[len--] = format[end--];
	int_value = ft_atoi(str_value);
	free(str_value);
	return (int_value);
}
