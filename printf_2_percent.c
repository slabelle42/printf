/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_2_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 20:00:04 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/11 20:00:58 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int		printf_percent(t_specifiers *specs)
{
	int	printed;

	printed = 0;
	if (specs->flag_minus == 1)
		printed += ft_putchar_fd('%', 1);
	printed += printf_display_width_precision(specs->width, 1, specs->flag_zero);
	if (specs->flag_minus == 0)
		printed += ft_putchar_fd('%', 1);
	return (printed);
}
