#include "printf.h"
#include <stdio.h>

#define RED "\x1b[31m"
#define GRE "\x1b[32m"
#define BLU "\x1b[34m"
#define RES "\x1b[0m"

int		main(void)
{
	int		print_a;
	int		print_b;
	

	printf("\n[   SIGNED DECIMAL _d   ]\n\n");
	
	print_a =    printf("printf    + - : %d %d\n", 123, -456);
	print_b = ft_printf("ft_printf     : %d %d\n", 123, -456);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    +++ : %d %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 1000000);
	print_b = ft_printf("ft_printf     : %d %d %d %d %d %d %d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 1000000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf    '0' : %d\n", 0);
	print_b = ft_printf("ft_printf     : %d\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    'a' : %d\n", 'a');
	print_b = ft_printf("ft_printf     : %d\n", 'a');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=5 : %5d\n", 100);
	print_b = ft_printf("ft_printf     : %5d\n", 100);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf    p=5 : %.5d\n", 100);
	print_b = ft_printf("ft_printf     : %.5d\n", 100);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     1. : %1.d|\n", 0);
	print_b = ft_printf("ft_printf     : %1.d|\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     05 : %05d\n", 100);
	print_b = ft_printf("ft_printf     : %05d\n", 100);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     -5 : %-5d %-5d\n", 400, -400);
	print_b = ft_printf("ft_printf     : %-5d %-5d\n", 400, -400);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    max : %d\n", 2147483647);
	print_b = ft_printf("ft_printf     : %d\n", 2147483647);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    min : %d\n", -2147483648);
	print_b = ft_printf("ft_printf     : %d\n", -2147483648);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    * 4 : %*d|\n", 4, 8);
	print_b = ft_printf("ft_printf     : %*d|\n", 4, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   * -4 : %*d|\n", -4, 8);
	print_b = ft_printf("ft_printf     : %*d|\n", -4, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  0* -4 : %0*d|\n", 4, 8);
	print_b = ft_printf("ft_printf     : %0*d|\n", 4, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   .* 4 : %.*d|\n", 4, 8);
	print_b = ft_printf("ft_printf     : %.*d|\n", 4, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  .* -4 : %.*d|\n", -4, 8);
	print_b = ft_printf("ft_printf     : %.*d|\n", -4, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf.* -4 0 : %.*d|\n", -4, 0);
	print_b = ft_printf("ft_printf     : %.*d|\n", -4, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf .* 0 0 : %.*d|\n", 0, 0);
	print_b = ft_printf("ft_printf     : %.*d|\n", 0, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf **-1-1 : %*.*d|\n", -1, -1, 0);
	print_b = ft_printf("ft_printf     : %*.*d|\n", -1, -1, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  **3-1 : %*.*d|\n", 3, -1, 0);
	print_b = ft_printf("ft_printf     : %*.*d|\n", 3, -1, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf  0**-1 : %0*.*d|\n", 3, -1, 0);
	print_b = ft_printf("ft_printf     : %0*.*d|\n", 3, -1, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf   0*.1 : %0*.1d|\n", 3, 0);
	print_b = ft_printf("ft_printf     : %0*.1d|\n", 3, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf 0**100 : %0*.*d|\n", 1, 0, 0);
	print_b = ft_printf("ft_printf     : %0*.*d|\n", 1, 0, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

//	print_a =    printf("BONUS printf     sp : % d % d\n", 400, -400);
//	print_b = ft_printf("      ft_printf     : % d % d\n", 400, -400);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");

//	print_a =    printf("BONUS printf      + : %+d %+d\n", 400, -400);
//	print_b = ft_printf("      ft_printf     : %+d %+d\n", 400, -400);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");

//	print_a =    printf("BONUS printf      + : %+4d|\n", 10);
//	print_b = ft_printf("      ft_printf     : %+4d|\n", 10);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf     -+ : %-+4d|\n", 10);
//	print_b = ft_printf("      ft_printf     : %-+4d|\n", 10);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf    ' ' : % 4d|\n", 10);
//	print_b = ft_printf("      ft_printf     : % 4d|\n", 10);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf   -' ' : %- 4d|\n", 10);
//	print_b = ft_printf("      ft_printf     : %- 4d|\n", 10);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");


	printf("\n[   UNSIGNED CHAR   ]\n\n");

	print_a =    printf("printf      a : %c\n", 'a');
	print_b = ft_printf("ft_printf     : %c\n", 'a');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      # : %c\n", '#');
	print_b = ft_printf("ft_printf     : %c\n", '#');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    ' ' : %c%c\n", ' ', '|');
	print_b = ft_printf("ft_printf     : %c%c\n", ' ', '|');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    abc : %c %c %c %c %c %c\n", 'a', 'b', 'c', 'd', 'e', 'f');
	print_b = ft_printf("printf        : %c %c %c %c %c %c\n", 'a', 'b', 'c', 'd', 'e', 'f');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=3 : %3c|\n", 'l');
	print_b = ft_printf("ft_printf     : %3c|\n", 'l');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     -3 : %-3c|\n", '-');
	print_b = ft_printf("ft_printf     : %-3c|\n", '-');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*c|\n", 4, 'c');
	print_b = ft_printf("ft_printf     : %*c|\n", 4, 'c');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     -* : %*c|\n", -4, 'c');
	print_b = ft_printf("ft_printf     : %*c|\n", -4, 'c');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      0 : %04c|\n", 'a');
	print_b = ft_printf("ft_printf     : %04c|\n", 'a');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

//	print_a =    printf("BONUS printf      + : %+4c|\n", 'a');
//	print_b = ft_printf("      ft_printf     : %+4c|\n", 'a');
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf     -+ : %-+4c|\n", 'a');
//	print_b = ft_printf("      ft_printf     : %-+4c|\n", 'a');
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf    ' ' : % 4c|\n", 'a');
//	print_b = ft_printf("      ft_printf     : % 4c|\n", 'a');
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf   -' ' : %- 4c|\n", 'a');
//	print_b = ft_printf("      ft_printf     : %- 4c|\n", 'a');
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");


	printf("\n[   STRING   ]\n\n");

	print_a =    printf("printf  'abc' : %s|\n", "abc");
	print_b = ft_printf("ft_printf     : %s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   '/0' : %s|\n", "\0");
	print_b = ft_printf("ft_printf     : %s|\n", "\0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    abc : %s %s %s|\n", "abc", "def", "ghi");
	print_b = ft_printf("ft_printf     : %s %s %s|\n", "abc", "def", "ghi");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=5 : %5s|\n", "abc");
	print_b = ft_printf("ft_printf     : %5s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    p=2 : %.2s|\n", "abc");
	print_b = ft_printf("ft_printf     : %.2s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    p=5 : %.5s|\n", "abc");
	print_b = ft_printf("ft_printf     : %.5s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    p=0 : %.0s|\n", "abc");
	print_b = ft_printf("ft_printf     : %.0s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    p=  : %.s|\n", "abc");
	print_b = ft_printf("ft_printf     : %.s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     -5 : %-5s|\n", "abc");
	print_b = ft_printf("ft_printf     : %-5s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     .* : %.*s|\n", 1, "0");
	print_b = ft_printf("ft_printf     : %.*s|\n", 1, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   -*.* : %*.*s|\n", -2, 0, "abc");
	print_b = ft_printf("ft_printf     : %*.*s|\n", -2, 0, "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   -2.0 : %-2.0s|\n", "abc");
	print_b = ft_printf("ft_printf     : %-2.0s|\n", "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     -* : %-*s|\n", 0, "abc");
	print_b = ft_printf("ft_printf     : %-*s|\n", 0, "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf -*.*ab : %*.*s|\n", -2, 1, "abc");
	print_b = ft_printf("ft_printf     : %*.*s|\n", -2, 1, "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf -*.* 0 : %*.*s|\n", -2, 2, "0");
	print_b = ft_printf("ft_printf     : %*.*s|\n", -2, 2, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf -*.* 0 : %*.*s|\n", -2, 3, "0");
	print_b = ft_printf("ft_printf     : %*.*s|\n", -2, 3, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf -*.*ab : %*.*s|\n", -2, 4, "abc");
	print_b = ft_printf("ft_printf     : %*.*s|\n", -2, 4, "abc");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   *.*0 : %*.*s|\n", 2, 2, "0");
	print_b = ft_printf("ft_printf     : %*.*s|\n", 2, 2, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   *.*0 : %*.*s|\n", 2, 3, "0");
	print_b = ft_printf("ft_printf     : %*.*s|\n", 2, 3, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   *.*0 : %*.*s|\n", 3, 2, "0");
	print_b = ft_printf("ft_printf     : %*.*s|\n", 3, 2, "0");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      N : %-s|\n", NULL);
	print_b = ft_printf("ft_printf     : %-s|\n", NULL);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      N : %-8s|\n", NULL);
	print_b = ft_printf("ft_printf     : %-8s|\n", NULL);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf 0 null : %04.s|\n", NULL);
	print_b = ft_printf("ft_printf     : %04.s|\n", NULL);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

//	print_a =    printf("BONUS printf      + : %+15s|\n", "abc");
//	print_b = ft_printf("      ft_printf     : %+15s|\n", "abc");
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf     -+ : %-+15s|\n", "abc");
//	print_b = ft_printf("      ft_printf     : %-+15s|\n", "abc");
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");
	
//	print_a =    printf("BONUS printf   hard : %+#024.s|\n", NULL);
//	print_b = ft_printf("      ft_printf     : %+#024.s|\n", NULL);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");


	printf("\n[   UNSIGNED DECIMAL _u   ]\n\n");
	
	print_a =    printf("printf    + - : %u %u\n", 123, -456);
	print_b = ft_printf("ft_printf     : %u %u\n", 123, -456);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    +++ : %u %u %u %u %u %u %u %u %u %u %u %u %u\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 1000000);
	print_b = ft_printf("ft_printf     : %u %u %u %u %u %u %u %u %u %u %u %u %u\n", 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 100, 1000, 1000000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf    '0' : %u\n", 0);
	print_b = ft_printf("ft_printf     : %u\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    'a' : %u\n", 'a');
	print_b = ft_printf("ft_printf     : %u\n", 'a');
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=5 : %5u\n", 100);
	print_b = ft_printf("ft_printf     : %5u\n", 100);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     05 : %05u\n", 100);
	print_b = ft_printf("ft_printf     : %05u\n", 100);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     -5 : %-5u %-5u\n", 400, -400);
	print_b = ft_printf("ft_printf     : %-5u %-5u\n", 400, -400);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    max : %u\n", 2147483647);
	print_b = ft_printf("ft_printf     : %u\n", 2147483647);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*u\n", 2, 1);
	print_b = ft_printf("ft_printf     : %*u\n", 2, 1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     *- : %*u\n", 2, -1);
	print_b = ft_printf("ft_printf     : %*u\n", 2, -1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     ** : %0*.*u\n", 3, 0, 11);
	print_b = ft_printf("ft_printf     : %0*.*u\n", 3, 0, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");


	printf("\n[   UNSIGNED HEXA _x   ]\n\n");

	print_a =    printf("printf      1 : %x\n", 1);
	print_b = ft_printf("ft_printf     : %x\n", 1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  1 2 3 : %x %x %x %x %x %x %x %x\n", 1, 2, 3, 4, 5, 6, 7, 8);
	print_b = ft_printf("ft_printf     : %x %x %x %x %x %x %x %x\n", 1, 2, 3, 4, 5, 6, 7, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      0 : %x\n", 0);
	print_b = ft_printf("ft_printf     : %x\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   1000 : %x\n", 1000);
	print_b = ft_printf("ft_printf     : %x\n", 1000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf 100... : %x\n", 1000000000);
	print_b = ft_printf("ft_printf     : %x\n", 1000000000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=5 : %5x|\n", 10000);
	print_b = ft_printf("ft_printf     : %5x|\n", 10000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  0  -5 : %-5x|\n", 10000);
	print_b = ft_printf("ft_printf     : %-5x|\n", 10000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*x\n", 2, 1);
	print_b = ft_printf("ft_printf     : %*x\n", 2, 1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*x\n", 2, 11);
	print_b = ft_printf("ft_printf     : %*x\n", 2, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %0*.*x\n", 2, 0, 11);
	print_b = ft_printf("ft_printf     : %0*.*x\n", 2, 0, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf      * : %0*x\n", 2, 11);
	print_b = ft_printf("ft_printf     : %0*x\n", 2, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
//	print_a =    printf("BONUS printf     #6 : %#x\n", 6);
//	print_b = ft_printf("      ft_printf     : %#x\n", 6);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");

//	print_a =    printf("BONUS printf     #0 : %#x\n", 0);
//	print_b = ft_printf("      ft_printf     : %#x\n", 0);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");


	printf("\n[   UNSIGNED HEXA _X   ]\n\n");

	print_a =    printf("printf      1 : %X\n", 1);
	print_b = ft_printf("ft_printf     : %X\n", 1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  1 2 3 : %X %X %X %X %X %X %X %X\n", 1, 2, 3, 4, 5, 6, 7, 8);
	print_b = ft_printf("ft_printf     : %X %X %X %X %X %X %X %X\n", 1, 2, 3, 4, 5, 6, 7, 8);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      0 : %X\n", 0);
	print_b = ft_printf("ft_printf     : %X\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf   1000 : %X\n", 1000);
	print_b = ft_printf("ft_printf     : %X\n", 1000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf 100... : %X\n", 1000000000);
	print_b = ft_printf("ft_printf     : %X\n", 1000000000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    l=5 : %5X|\n", 10000);
	print_b = ft_printf("ft_printf     : %5X|\n", 10000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  0  -5 : %-5X|\n", 10000);
	print_b = ft_printf("ft_printf     : %-5X|\n", 10000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*X\n", 2, 1);
	print_b = ft_printf("ft_printf     : %*X\n", 2, 1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      * : %*X\n", 2, 11);
	print_b = ft_printf("ft_printf     : %*X\n", 2, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

//	print_a =    printf("BONUS printf     #6 : %#X\n", 6);
//	print_b = ft_printf("      ft_printf     : %#X\n", 6);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");

//	print_a =    printf("BONUS printf     #0 : %#X\n", 0);
//	print_b = ft_printf("      ft_printf     : %#X\n", 0);
//	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
//	printf("\n");


	printf("\n[   UNSIGNED HEXA _p   ]\n\n");

	char	*p_val1 = "abc";

	print_a =    printf("printf     p1 : %p\n", p_val1);
	print_b = ft_printf("ft_printf     : %p\n", p_val1);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	char	*p_val2 = "def";
	char	*p_val3 = "ghijklmnopqrstuvwxyz";

	print_a =    printf("printf     p3 : %p %p %p\n", p_val1, p_val2, p_val3);
	print_b = ft_printf("ft_printf     : %p %p %p\n", p_val1, p_val2, p_val3);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	char	*p_nil = NULL;

	print_a =    printf("printf   null : %p\n", p_nil);
	print_b = ft_printf("ft_printf     : %p\n", p_nil);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf  p nil : %p %p %p %p\n", p_val1, p_nil, p_val2, p_val3);
	print_b = ft_printf("ft_printf     : %p %p %p %p\n", p_val1, p_nil, p_val2, p_val3);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     0* : %0*p\n", 2, 11);
	print_b = ft_printf("ft_printf     : %0*p\n", 2, 11);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf    * 0 : %*p|\n", 8, 0);
	print_b = ft_printf("ft_printf     : %*p|\n", 8, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf   -* 0 : %-*p|\n", 8, 0);
	print_b = ft_printf("ft_printf     : %-*p|\n", 8, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf  -.* 0 : %-.*p|\n", 8, 0);
	print_b = ft_printf("ft_printf     : %-.*p|\n", 8, 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf  -* ++ : %-*p|\n", 8, 1000);
	print_b = ft_printf("ft_printf     : %-*p|\n", 8, 1000);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf   -* - : %-*p|\n", 8, -4);
	print_b = ft_printf("ft_printf     : %-*p|\n", 8, -4);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf   -* N : %-*p|\n", 8, NULL);
	print_b = ft_printf("ft_printf     : %-*p|\n", 8, NULL);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");


	printf("\n[   PERCENT __   ]\n\n");

	print_a =    printf("printf    10_ : %%%%%%%%%%\n");
	print_b = ft_printf("ft_printf     : %%%%%%%%%%\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("printf     30 : %30%|\n");
	print_b = ft_printf("ft_printf     : %30%|\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    -30 : %-30%|\n");
	print_b = ft_printf("ft_printf     : %-30%|\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf    030 : %030%|\n");
	print_b = ft_printf("ft_printf     : %030%|\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

/*
	printf("\n[   NO FORMAT _   ]\n\n");
	
	print_a =    printf("printf     1_ : %\n");
	print_b = ft_printf("ft_printf     : %\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     _1 : %1\n");
	print_b = ft_printf("ft_printf     : %1\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf     _. : %.1\n");
	print_b = ft_printf("ft_printf     : %.1\n");
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");

	print_a =    printf("printf      k : %k|\n", 0);
	print_b = ft_printf("ft_printf     : %k|\n", 0);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");


	printf("\n[   MAC DIFF   ]\n\n");
	
	print_a =    printf("  : |%i %d %d %d %d %s %c %d %u %x %X|\n", 8, -12, 123456789, 0, -12345678, "abcdefghijklmnop", 'a', 'a', -12, -12, -12);
	print_b =    printf("ft: |%i %d %d %d %d %s %c %d %u %x %X|\n", 8, -12, 123456789, 0, -12345678, "abcdefghijklmnop", 'a', 'a', -12, -12, -12);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
	
	print_a =    printf("  : |%u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X|\n", 8, 8, 8, -12, -12, -12, 123456789, 123456789, 123456789, 0, 0, 0, -12345678, -12345678, -12345678, 'a', 'a', 'a', 2147483647, 2147483647, 2147483647, -2147483648, -2147483648, -2147483648);
	print_b =    printf("ft: |%u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X %u %x %X|\n", 8, 8, 8, -12, -12, -12, 123456789, 123456789, 123456789, 0, 0, 0, -12345678, -12345678, -12345678, 'a', 'a', 'a', 2147483647, 2147483647, 2147483647, -2147483648, -2147483648, -2147483648);
	(print_a == print_b) ? printf(GRE "[OK]\n" RES) : printf(RED "[KO]\n" RES);
	printf("\n");
*/

	system("leaks libftprintf");

	return (0);
}
