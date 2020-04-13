#include "printf.h"

static t_flags		*printf_init_flags(void)
{
	t_flags			*flags;

	if (!(flags = ft_memalloc(sizeof(t_flags))))
		return (NULL);
	flags->minus = 0;
	flags->zero = 0;
	flags->dot = 0;
	flags->aster_width = 0;
	flags->aster_precis = 0;
	return (flags);
}

static t_specifiers	*printf_init_specs(void)
{
	t_specifiers	*specs;

	if (!(specs = ft_memalloc(sizeof(t_specifiers))))
		return (NULL);
	specs->i = 0;
	specs->j = 0;
	specs->width = 0;
	specs->precision = 0;
	specs->letter = ' ';
	return (specs);
}
