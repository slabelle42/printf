/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_1_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:29:20 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/05 16:56:15 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_minus_str(char *str_ap, t_specifiers *specs, int ap_len)
{
	int		printed;

	printed = 0;
	if (specs->precision >= 0)
	{
		printed += printf_display_width_precision(specs->precision, ap_len, 0);
	}
	else
		;
}

int			printf_string(char *str_ap, t_flags *flags,
			t_specifiers *specs)
{
	int		ap_len;
	int		printed;

	ap_len = (int)ft_strlen(str_ap);
	printed = 0;
	if (!str_ap)
		str = "(null)";
	if (specs->precision >= 0 && specs->precision > ap_len)
		specs->precision = ap_len;
	if (flags->minus == 1)
		printed += printf_minus_str(str_ap, flags, ap_len);
	
	return (printed);
}
