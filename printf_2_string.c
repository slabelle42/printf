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

static int	printf_display_str(char *str_ap, t_specifiers *specs, int ap_len)
{
	int		printed;
	int		k;

	printed = 0;
	k = -1;
	if (specs->precision >= 0)
	{
		printed += printf_display_width_precision(specs->precision, ap_len, 0);
		while (str_ap[++k] && k < specs->precision)
			printed += ft_putchar_fd(str_ap[k], 1);
	}
	else
		while (str_ap[++k] && k < ap_len)
			printed += ft_putchar_fd(str_ap[k], 1);
	return (printed);
}

int			printf_string(char *str_ap, t_flags *flags,
			t_specifiers *specs)
{
	int		ap_len;
	int		printed;

	if (!str_ap)
		str_ap = "(null)";
	ap_len = (int)ft_strlen(str_ap);
	printed = 0;
	if (specs->precision >= 0 && specs->precision > ap_len)
		specs->precision = ap_len;
	if (flags->minus == 1)
		printed += printf_display_str(str_ap, specs, ap_len);
	if (specs->precision >= 0)
		printed += printf_display_width_precision(specs->width,
			specs->precision, 0);
	else
		printed += printf_display_width_precision(specs->width, ap_len, 0);
	if (flags->minus == 0)
		printed += printf_display_str(str_ap, specs, ap_len);
	return (printed);
}
