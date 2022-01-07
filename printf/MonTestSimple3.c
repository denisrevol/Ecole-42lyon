#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <wchar.h>
#include <locale.h>
#define SL "\n"
#include "libftprintf.h"


int		main(int ac, char **av)
{
	int n1;
	int n2;

	//	char *pointer;

	ac =2;
	av[0] = "";

	printf("********************************************************************\n");
	printf("*********3 eme   serie test");
	printf("********************************************************************\n");
	printf("\n");

	printf("pourcent 1 pourcent  \n" );
	n1=printf("%-1%\n") ; 
	n2=ft_printf("%-1%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 2 pourcent  \n" );
	n1 =printf("%-2%\n") ;
   	n2=ft_printf("%-2%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 10 pourcent  \n" );
	n1=printf("%-10%\n") ; 
	n2=ft_printf("%-10%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 c  \n" );
	n1=printf("%-1c\n", '1') ; 
	n2=ft_printf("%-1c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 2 c  \n" );
	n1=printf("%-2c\n", '1') ; n2=ft_printf("%-2c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 10 c  \n" );
	n1=printf("%-10c\n", '1') ;
    n2=ft_printf("%-10c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 s  \n" );
	n1=printf("%-1s\n", "") ; 
	n2=ft_printf("%-1s\n", "");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 5 s  \n" );
	n1=printf("%-5s\n", "Hello") ; 
	n2=ft_printf("%-5s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 6 s  \n" );
	n1=printf("%-6s\n", "Hello") ;
   	n2=ft_printf("%-6s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 7 s  \n" );
	n1=printf("%-7s\n", "Hello") ;
   	n2=ft_printf("%-7s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%-1i\n", 0) ; n2=ft_printf("%-1i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2i\n", 0) ; n2=ft_printf("%-2i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10i\n", 0) ; n2=ft_printf("%-10i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1i\n", -1) ; n2=ft_printf("%-1i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2i\n", -1) ; n2=ft_printf("%-2i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-3i\n", -1) ; n2=ft_printf("%-3i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-9i\n", INT_MAX) ; n2=ft_printf("%-9i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10i\n", INT_MAX) ; n2=ft_printf("%-10i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-11i\n", INT_MAX) ; n2=ft_printf("%-11i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1d\n", 0) ; n2=ft_printf("%-1d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2d\n", 0) ; n2=ft_printf("%-2d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10d\n", 0) ; n2=ft_printf("%-10d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1d\n", -1) ; n2=ft_printf("%-1d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2d\n", -1) ; n2=ft_printf("%-2d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-3d\n", -1) ; n2=ft_printf("%-3d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-9d\n", INT_MAX) ; n2=ft_printf("%-9d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10d\n", INT_MAX) ; n2=ft_printf("%-10d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-11d\n", INT_MAX) ; n2=ft_printf("%-11d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1u\n", 0) ; n2=ft_printf("%-1u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2u\n", 0) ; n2=ft_printf("%-2u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10u\n", 0) ; n2=ft_printf("%-10u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1u\n", -1) ; n2=ft_printf("%-1u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2u\n", -1) ; n2=ft_printf("%-2u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-3u\n", -1) ; n2=ft_printf("%-3u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-9u\n", UINT_MAX) ; n2=ft_printf("%-9u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10u\n", UINT_MAX) ; n2=ft_printf("%-10u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-11u\n", UINT_MAX) ; n2=ft_printf("%-11u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf(" petit  X\n");
	n1=printf("%-1x\n", 0) ; n2=ft_printf("%-1x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2x\n", 0) ; n2=ft_printf("%-2x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10x\n", 0) ; n2=ft_printf("%-10x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1x\n", -1) ; n2=ft_printf("%-1x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2x\n", -1) ; n2=ft_printf("%-2x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-3x\n", -1) ; n2=ft_printf("%-3x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-9x\n", UINT_MAX) ; n2=ft_printf("%-9x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10x\n", UINT_MAX) ; n2=ft_printf("%-10x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-11x\n", UINT_MAX) ; n2=ft_printf("%-11x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf(" Grand X \n");
	n1=printf("%-1X\n", 0) ; n2=ft_printf("%-1X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2X\n", 0) ; n2=ft_printf("%-2X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10X\n", 0) ; n2=ft_printf("%-10X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1X\n", -1) ; n2=ft_printf("%-1X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-2X\n", -1) ; n2=ft_printf("%-2X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-3X\n", -1) ; n2=ft_printf("%-3X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-9X\n", UINT_MAX) ; n2=ft_printf("%-9X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-10X\n", UINT_MAX) ; n2=ft_printf("%-10X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-11X\n", UINT_MAX) ; n2=ft_printf("%-11X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-1p\n", (void*)42) ; n2=ft_printf("%-1p\n", (void*)42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-5p\n", (void*)42) ; n2=ft_printf("%-5p\n", (void*)42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

}		
