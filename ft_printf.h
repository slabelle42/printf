/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slabelle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 16:28:56 by slabelle          #+#    #+#             */
/*   Updated: 2020/04/13 21:46:11 by slabelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef struct		s_flags
{
	int				minus;
	int				zero;
	int				dot;
	int				aster_width;
	int				aster_precis;
}					t_flags;

typedef struct		s_specifiers
{
	int				i;
	int				j;
	int				width;
	int				precision;
	char			letter;
}					t_specifiers;

int					ft_printf(const char *format, ...);

static t_flags		*printf_init_flags(void);
static t_specifiers	*printf_init_specs(void);
int					printf_width_precision(const char *format,
					t_specifiers *specs);

#endif
