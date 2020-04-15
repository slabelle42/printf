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

int		printf_unsigned_decimal(unsigned int uint_ap, t_flags *flags,
		t_specifiers *specs)
{
	uint_ap = (unsigned int)(uint_ap + 4294967295 + 1);
	return (ft_printf("%d", uint_ap));
}
