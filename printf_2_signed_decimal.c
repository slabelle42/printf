/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2_signed_decimal.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:29:12 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/05 16:42:53 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int			printf_signed_decimal(int *int_ap, t_flags *flags, t_specifiers *specs)
{
	int		printed;
	int		k;
	char	*str_ap;

	printed = 0;
	if (int_ap == 0 && specs->precision == 0)
		return (printf_display_width_precision(specs->width, 0, 0));
	if (int_ap < 0 && (specs->precision >= 0 || flags->zero == 1)
		&& int_ap != -2147483648)
	{
		if (specs->precision <= -1 && flags->zero == 1)
			ft_putchar_fd('-', 1);
		int_ap = -int_ap;
		flags->zero = 1;
		specs->width--;
		printed++;
	}
	str_ap = ft_itoa(int_ap);
	printed += printf_display_sd(int_ap, flags, str_ap);
	free(str_ap);
	return (printed);
}
