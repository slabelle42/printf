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

#ifndef PRINTF_H
# define PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

typedef struct		s_flags
{
	int				minus;
	int				zero;
	int				dot;
}					t_flags;

typedef struct		s_specifiers
{
	int				i;
	int				j;
	int				width;
	int				precision;
	char			type;
}					t_specifiers;

int					ft_printf(const char *format, ...);

static t_flags		*printf_init_flags(void);
static t_specifiers	*printf_init_specs(void);
int					printf_width_precision(const char *format,
						t_specifiers *specs);

#endif
