/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_1_flags_specs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 21:35:00 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/13 21:47:08 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_specifiers		*printf_init_specs(void)
{
	t_specifiers	*specs;

	if (!(specs = ft_memalloc(sizeof(t_specifiers))))
		return (NULL);
	specs->i = 0;
	specs->j = 0;
	specs->flag_minus = 0
	specs->flag_zero = 0
	specs->width = 0;
	specs->flag_dot = 0
	specs->precision = -1;
	specs->type = ' ';
	return (specs);
}

void				printf_flags(const char *format, t_flags *flags,
					t_specifiers *specs)
{
	while (++(specs->i) < specs->j
		&& !(ft_strchr(".123456789*", format[specs->i])))
		if (format[specs->i] == '-')
			flags->minus = 1;
		else if (format[specs->i] == '0')
			flags->zero = 1;
	if (flags->minus == 1)
		flags->zero = 0;
}
