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
	printf("*********5 eme   serie test");
	printf("********************************************************************\n");
	printf("\n");

	printf("pourcent .0 pourcent  \n" );
	n1=printf("%.0%\n") ; 
	n2=ft_printf("%.0%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);


	printf("pourcent .1 pourcent  \n" );
	n1=printf("%.1%\n") ; 
	n2=ft_printf("%.1%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent .2 pourcent  \n" );
	n1=0;
	n1 =  printf("%.2%\n") ;
   	n2=ft_printf("%.2%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 10 pourcent  \n" );
	n1=printf("%.10%\n") ; 
	n2=ft_printf("%.10%\n");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 c  \n" );
	n1=printf("%.1c\n", '1') ; 
	n2=ft_printf("%.1c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 2 c  \n" );
	n1=printf("%.2c\n", '1') ; n2=ft_printf("%.2c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 10 c  \n" );
	n1=printf("%.10c\n", '1') ;
    n2=ft_printf("%.10c\n", '1');
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 s  \n" );
	n1=printf("%.1s\n", "") ; 
	n2=ft_printf("%.1s\n", "");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 2 s  \n" );
	n1=printf("%.2s\n", "") ; 
	n2=ft_printf("%.2s\n", "");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 5 s  \n" );
	n1=printf("%.5s\n", "Hello") ; 
	n2=ft_printf("%.5s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 6 s  \n" );
	n1=printf("%.6s\n", "Hello") ;
   	n2=ft_printf("%.6s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 7 s  \n" );
	n1=printf("%.7s\n", "Hello") ;
   	n2=ft_printf("%.7s\n", "Hello");
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.0d\n", 0) ; n2=ft_printf("%.0d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1d\n", 0) ; n2=ft_printf("%.1d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2d\n", 0) ; n2=ft_printf("%.2d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0d\n", 5) ; n2=ft_printf("%.0d\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1d\n", 5) ; n2=ft_printf("%.1d\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2d\n", 5) ; n2=ft_printf("%.2d\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0d\n", 42) ; n2=ft_printf("%.0d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1d\n", 42) ; n2=ft_printf("%.1d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2d\n",42) ; n2=ft_printf("%.2d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.3d\n", 42) ; n2=ft_printf("%.3d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.10d\n", 42) ; n2=ft_printf("%.10d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.6d\n", 100) ; n2=ft_printf("%.6d\n", 100);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0d\n", -1) ; n2=ft_printf("%.0d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1d\n", -1) ; n2=ft_printf("%.1d\n",-1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.2d\n", -1) ; n2=ft_printf("%.2d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.3d\n",-1) ; n2=ft_printf("%.3d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.0d\n", -42) ; n2=ft_printf("%.0d\n",-42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1d\n", -42) ; n2=ft_printf("%.1d\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2d\n",-42) ; n2=ft_printf("%.2d\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.4d\n",-42) ; n2=ft_printf("%.4d\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20d\n",INT_MAX) ; n2=ft_printf("%.20d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20d\n",INT_MAX+1) ; n2=ft_printf("%.20d\n", INT_MAX+1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20d\n",INT_MIN) ; n2=ft_printf("%.20d\n", INT_MIN);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20d\n",INT_MIN-1) ; n2=ft_printf("%.20d\n", INT_MIN-1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0i\n", 0) ; n2=ft_printf("%.0i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1i\n", 0) ; n2=ft_printf("%.1i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2i\n", 0) ; n2=ft_printf("%.2i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0i\n", 5) ; n2=ft_printf("%.0i\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1i\n", 5) ; n2=ft_printf("%.1i\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2i\n", 5) ; n2=ft_printf("%.2i\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0i\n", 42) ; n2=ft_printf("%.0i\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1i\n", 42) ; n2=ft_printf("%.1i\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2i\n",42) ; n2=ft_printf("%.2i\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.3i\n", 42) ; n2=ft_printf("%.3i\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.10i\n", 42) ; n2=ft_printf("%.10i\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.6i\n", 100) ; n2=ft_printf("%.6i\n", 100);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0i\n", -1) ; n2=ft_printf("%.0i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1i\n", -1) ; n2=ft_printf("%.1i\n",-1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.2i\n", -1) ; n2=ft_printf("%.2i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.3i\n",-1) ; n2=ft_printf("%.3i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.0i\n", -42) ; n2=ft_printf("%.0i\n",-42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1i\n", -42) ; n2=ft_printf("%.1i\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%.2i\n",-42) ; n2=ft_printf("%.2i\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.4i\n",-42) ; n2=ft_printf("%.4i\n", -42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20i\n",INT_MAX) ; n2=ft_printf("%.20i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20i\n",INT_MAX+1) ; n2=ft_printf("%.20i\n", INT_MAX+1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20i\n",INT_MIN) ; n2=ft_printf("%.20i\n", INT_MIN);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.20i\n",INT_MIN-1) ; n2=ft_printf("%.20i\n", INT_MIN-1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0u\n", 0) ; n2=ft_printf("%.0u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1u\n", 0) ; n2=ft_printf("%.1u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.2u\n", 0) ; n2=ft_printf("%.2u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0u\n", 5) ; n2=ft_printf("%.0u\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1u\n", 5) ; n2=ft_printf("%.1u\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.2u\n", 5) ; n2=ft_printf("%.2u\n", 5);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.0u\n", 42) ; n2=ft_printf("%.0u\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.1u\n", 42) ; n2=ft_printf("%.1u\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.2u\n", 42) ; n2=ft_printf("%.2u\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.3u\n", 42) ; n2=ft_printf("%.3u\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.10u\n", 42) ; n2=ft_printf("%.10u\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%.6u\n", 100) ; n2=ft_printf("%.6u\n", 100);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);



}		
