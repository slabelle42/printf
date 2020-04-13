#include "printf.h"

static t_flags		*printf_initialize_flags(void)
{
	t_flags			*flags;

	flags->minus = 0;
	flags->zero = 0;
	flags->aster = 0;
	flags->dot = 0;
	return (flags);
}

static t_specifiers	*printf_initialize_specs(void)
{
	t_specifiers	*specs;

	specs->j = 0;
	specs->width = 0;
	specs->precision = 0;
	return (specs);
}
