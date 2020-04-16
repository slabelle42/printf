/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:33:17 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/05 17:05:08 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_display_pt(t_specifiers *specs, char *str_ap, int ap_len)
{
	int		printed;
	int		k;

	printed = 0;
	printed += ft_putstr_fd("0x", 1);
	k = -1;
	if (specs->precision >= 0)
	{
		printed += printf_display_width_precision(specs->precision, ap_len,
			specs->flag_zero);
		while (++k < specs->precision)
			printed += ft_putchar_fd(str_ap[k], 1);
	}
	else
		while (++k < ap_len)
			printed += ft_putchar_fd(str_ap[k], 1);
	return (printed);
}

static int	printf_zero_pt(t_specifiers *specs)
{
	int		printed;

	printed = 0;
	if (specs->width >= 0 && specs->flag_minus == 0)
	{
		printed += printf_display_width_precision((specs->width - 2), 0,
			specs->flag_zero);
		printed += ft_putstr_fd("0x", 1);
	}
	else
	{
		printed += ft_putstr_fd("0x", 1);
		printed += printf_display_width_precision((specs->width - 2), 0,
			specs->flag_zero);
	}
	return (printed);
}

int			printf_pointer(unsigned long long ull_ap, t_specifiers *specs)
{
	int		printed;
	char	*str_ap;
	int		ap_len;

	if (ull_ap == 0 && specs->precision == 0)
		return (printf_zero_pt(specs));
	printed = 0;
	str_ap = ft_itoa_ull_base(ull_ap, 16);
	ap_len = (int)ft_strlen(str_ap);
	if (specs->precision < ap_len)
		specs->precision = ap_len;
	if (specs->flag_minus == 1)
		printed += printf_display_pt(specs, str_ap, ap_len);
	printed += printf_display_width_precision(specs->width, (ap_len + 2),
		specs->flag_zero);
	if (specs->flag_minus == 0)
		printed += printf_display_pt(specs, str_ap, ap_len);
	free(str_ap);
	return (printed);
}
