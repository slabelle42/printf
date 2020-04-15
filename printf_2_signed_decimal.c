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

static int	printf_display2_sd(t_specifiers *specs, int int_ap, char *str_ap,
			int ap_len)
{
	int		printed;
	int		k;

	printed = 0;
	if (int_ap < 0 && int_ap != -2147483648 && specs->precision >= 0)
		ft_putchar_fd('-', 1);
	if (specs->precision >= 0)
		printed += printf_display_width_precision(specs->precision - 1,
			ap_len - 1, 1);
	k = -1;
	while (str_ap[++k] && k < ap_len)
		printed += ft_putchar_fd(str_ap[k], 1);
	return (printed);
}

static int	printf_display_sd(t_flags *flags, t_specifiers *specs, int int_ap,
			char *str_ap)
{
	int		ap_len;
	int		printed;

	ap_len = (int)ft_strlen(str_ap);
	printed = 0;
	if (flags->minus == 1)
		printed += printf_display2_sd(int_ap, specs, str_ap, ap_len);
	if (specs->precision >= 0 && specs->precision < ap_len)
		specs->precision = ap_len;
	if (specs->precision >= 0)
	{
		specs->width -= specs->precision;
		printed += printf_display_width_precision(specs->width, 0, 0);
	}
	else
		printed += printf_display_width_precision(specs->width, ap_len,
			specs->precision);
	if (flags->minus == 0)
		printed += printf_display2_sd(int_ap, specs, str_ap, ap_len);
	return (printed);
}

int			printf_signed_decimal(int int_ap, t_flags *flags, t_specifiers *specs)
{
	int		printed;
	int		int_cpy;
	char	*str_ap;

	if (int_ap == 0 && specs->precision == 0)
		return (printf_display_width_precision(specs->width, 0, 0));
	printed = 0;
	int_cpy = int_ap;
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
	printed += printf_display_sd(flags, specs, int_cpy, str_ap);
	free(str_ap);
	return (printed);
}
