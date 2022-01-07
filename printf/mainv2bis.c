# include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <wchar.h>
#include <locale.h>


int main()
{
    int     n1;
    int     n2;
    char    *str;
    char	stre[] = {'a', 's', 10, 'E', 'k', 0, 3, 123, -15, 15};

    n1 = 0;
    n2 = 0;
    str = "astek";
  /*  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%s|\n", str);
		n2 = ft_printf("|%s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-s|\n", str);
		n2 = ft_printf("|%-s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*s|\n", 6, str);
		n2 = ft_printf("|%*s|\n", 6, str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-*s|\n", 6, str);
		n2 = ft_printf("|%-*s|\n", 6, str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-------------*s|\n", 6, str);
		n2 = ft_printf("|%-------------*s|\n", 6, str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%.3s|\n", str);
		n2 = ft_printf("|%.3s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%.10s|\n", str);
		n2 = ft_printf("|%.10s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%3s|\n", str);
		n2 = ft_printf("|%3s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%10s|\n", str);
		n2 = ft_printf("|%10s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-3s|\n", str);
		n2 = ft_printf("|%-3s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-10s|\n", str);
		n2 = ft_printf("|%-10s|\n", str);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%c|\n", stre[0]);
		n2 = ft_printf("|%c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-c|\n", stre[0]);
		n2 = ft_printf("|%-c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*c|\n", 6, stre[0]);
		n2 = ft_printf("|%*c|\n", 6, stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-*c|\n", 6, stre[0]);
		n2 = ft_printf("|%-*c|\n", 6, stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-------------*c|\n", 6, stre[0]);
		n2 = ft_printf("|%-------------*c|\n", 6, stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%1c|\n", stre[0]);
		n2 = ft_printf("|%1c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%10c|\n", stre[0]);
		n2 = ft_printf("|%10c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-1c|\n", stre[0]);
		n2 = ft_printf("|%-1c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-10c|\n", stre[0]);
		n2 = ft_printf("|%-10c|\n", stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-10c|%-1c|%*c|\n", stre[0], stre[0], 6, stre[0]);
		n2 = ft_printf("|%-10c|%-1c|%*c|\n", stre[0], stre[0], 6, stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-10c|\n", stre[5]);
		n2 = ft_printf("|%-10c|\n", stre[5]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*c|\n", -1000, stre[0]);
		n2 = ft_printf("|%*c|\n", -1000, stre[0]);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);*/

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.*s|\n", 10, 10, NULL);
		n2 = ft_printf("|%*.*s|\n", 10, 10, NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

    printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-*.*s|\n", 10, 3, NULL);
		n2 = ft_printf("|%-*.*s|\n", 10, 3, NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);
}