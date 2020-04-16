/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:31:24 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/05 17:04:30 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	printf_display2_ud(t_specifiers *specs, char *str_ap, int ap_len)
{
	int		printed;
	int		k;

	printed = 0;
	if (specs->precision >= 0)
		printed += printf_display_width_precision((specs->precision - 1),
			(ap_len - 1), 1);
	k = -1;
	while (str_ap[++k] && k < ap_len)
		printed += ft_putchar_fd(str_ap[k], 1);
	return (printed);
}

static int	printf_display_ud(t_specifiers *specs, char *str_ap)
{
	int		ap_len;
	int		printed;

	ap_len = (int)ft_strlen(str_ap);
	printed = 0;
	if (specs->flag_minus == 1)
		printed += printf_display2_ud(specs, str_ap, ap_len);
	if (specs->precision >= 0 && specs->precision < ap_len)
		specs->precision = ap_len;
	if (specs->precision >= 0)
	{
		specs->width -= specs->precision;
		printed += printf_display_width_precision(specs->width, 0, 0);
	}
	else
	{
		if (specs->width && specs->precision == -1 && specs->flag_zero == 0)
			printed += printf_display_width_precision(specs->width, ap_len, 0);
		else
			printed += printf_display_width_precision(specs->width, ap_len,
				specs->precision);
	}
	if (specs->flag_minus == 0)
		printed += printf_display2_ud(specs, str_ap, ap_len);
	return (printed);
}

int			printf_unsigned_decimal(unsigned int uint_ap, t_specifiers *specs)
{
	int		printed;
	char	*str_ap;

	if (uint_ap == 0 && specs->precision == 0)
		return (printf_display_width_precision(specs->width, 0, 0));
	printed = 0;
	str_ap = ft_itoa_ull((unsigned long long)uint_ap);
	printed += printf_display_ud(specs, str_ap);
	free(str_ap);
	return (printed);
}
