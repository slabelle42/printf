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

static int	printf_display_pt(t_specifiers *specs, char *str_ap)
{
	;
}

int			printf_pointer(unsigned long long ull_ap, t_specifiers *specs)
{
	int		printed;
	char	*str_ap;
	int		k;

	if (ull_ap == 0 && specs->precision == 0)
	{
		;
	}
	printed = 0;
	str_ap = ft_itoa_ull_base(ull_ap, 16);
	;
	printed += printf_display_uh(specs, str_ap);
	;
	free(str_ap);
	return (printed);
}
