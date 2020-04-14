/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_unsigned_char.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:33:25 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/05 17:05:33 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		printf_unsigned_char(char char_ap, t_flags *flags, t_specifiers *specs)
{
	int	printed;

	printed = 0;
	if (flags->minus == 1)
		printed += ft_putchar_fd(char_ap, 1);
	printed += printf_display_width_precision(specs->width, 1, 0);
	if (flags->minus == 0)
		printed += ft_putchar_fd(char_ap, 1);
	return (printed);
}
