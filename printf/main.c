# include "libftprintf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <wchar.h>
#include <locale.h>

//#define ULONG_MAX 0xFFFFFFFFUL
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648

int main()
{
    /*char *test = "test%%%% surnaturel %c retard %-12s j'ai %p ans et %d dents mais %i ballons %u hexa %X ou %d et la";
    //char    e = 'e';
    char encore = 'e';
    char *un = "un";
    int   n = 25;
    int   m = -12;
    int  d =  20;
    unsigned int u = 254;
    unsigned int w = 252;
    int     p;
    int     f;*/
   int n1;
    int n2;
 //  int     ft;
    void  *v;
// char	*str = "astek";
 //char	stre[] = {'a', 's', 10, 'E', 'k', 0, 3, 123, -15, 15};
int	i;
 n1 = 0;
 n2 = 0;
 v = 0;
 i = 0;

   //printf("\nessai printf= %u\n", -1);
 //ft = ft_printf("%p\n", (void*)-1);
  //ft_printf("%p\n", (void*)ULONG_MAX + 1);
  //ft_printf("ft = %d\n", ft);
   /* f = printf(test, encore, un, n, m  ,d, w, u);
    printf("\nreturn %d\n", f);
       p = ft_printf(test, encore, un, n, m  ,d, w, u);
    printf("\nRETURN = %d\n", p);*/


/*printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%012x|\n", stre[7]);
		n2 = ft_printf("|%012x|\n", stre[7]);
	printf ("n1 = %d, n2 = %d \n", n1,n2);*/


 /*i = -256;
while (  i < -10)
{
  printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%d:[%.3d]\n", i);
		n2 = ft_printf("%%d:[%.3d]\n", i);
	printf ("n1 = %d, n2 = %d \n", n1,n2);
	i++;
}


  printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%010.1d]\n", -8473);
		n2 = ft_printf("%%p::[%010.1d]\n", -8473);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%0100.50d]\n", -8473);
		n2 = ft_printf("%%p::[%0100.50d]\n", -8473);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	i = 0;

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%0100.50d]\n", 8473);
		n2 = ft_printf("%%p::[%0100.50d]\n", 8473);
	printf ("n1 = %d, n2 = %d \n", n1,n2);*/

/*	while (  i < 257)
{
  dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "%%p:[%c\n",  i);
		n2 = ft_printf("%%f:[%c\n",  i);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);
	i++;
}

  

  dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "%%p:[%c\n", 2147483647 );
		n2 = ft_printf("%%f:[%c\n",  2147483647);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "%%p:[%c\n", -2147483647 );
		n2 = ft_printf("%%f:[%c\n",  -2147483647);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

	dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "%%p:[%c\n", 0 );
		n2 = ft_printf("%%f:[%c\n",  0);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);
i = 0;
while ( i < 1002)
{
	printf("pourcent 1 pourcent  1.4 \n" );
	dprintf(1, "i = %d\n", i);
	n1 = dprintf(1,"%%d:[%1.4x]\n", i);
		n2 = ft_printf("%%d:[%1.4x]\n", i);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);
	i++;
}

	printf("pourcent 1 pourcent  2.2 \n" );
	n1 = printf("%%d:[%2.2x]\n", 25);
		n2 = ft_printf("%%d:[%2.2x]\n", 25);
	printf ("n1 = %d, n2 = %d \n", n1,n2);


  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%46c|\n", 0);
		n2 = ft_printf("|%46c|\n", 0);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-46c|\n", 0);
		n2 = ft_printf("|%-46c|\n", 0);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("neg3 %*s|\n", -9, NULL);

	ft_printf("neg3 %*s|\n", -9, NULL);
i = 0;

while (i < 255)
{
	//printf("##### Tests [c] #####\n");
	dprintf(1, "i = %d\n", i);
	n1 = printf("\t|%-5c|\n", i);
	n2 = ft_printf("\t|%-5c|\n", i);
	printf ("n1 = %d, n2 = %d \n", n1,n2);
	i++;
}

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-2s|\n",  NULL);
		n2 = ft_printf("|%-2s|\n",  NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);


	printf("pourcent 1 pourcent  1.4 \n" );
	n1 = dprintf(1,"|%*d|\n", -45, 0);
		n2 = ft_printf("|%*d|\n", -45, 0);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);
	i++;*/



  dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "%*.*x\n", 50, 10, 2);
		n2 = ft_printf("%*.*x\n", 50, 10, 2);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

  dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "neg8 %*.*d\n", -150, 15, 300);
		n2 = ft_printf("neg8 %*.*d\n", -150, 15, 300);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

  dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "neg10 %*.*d\n", -155, 15, 150);
		n2 = ft_printf("neg10 %*.*d\n", -155, 15, 150);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

dprintf(1, "pourcent 1 pourcent  \n" );
	n1 = dprintf(1, "|%.p|\n", NULL);
		n2 = ft_printf("|%.p|\n", NULL);
	dprintf (1, "n1 = %d, n2 = %d \n", n1,n2);

/*	printf("%c", 'a');
	printf("%10c", 't');
	printf("%1c", 'y');
	printf("%010c", 't');
	printf("%50.2s", "Coucou");
	printf("%50.2s", NULL);
	printf("%5.0s", "Hello");
	printf("%.1s", "Test");
	printf("%10s", NULL);
	printf("%10s", "Ok");
	printf("%d\n", printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));

	ft_printf("%c", 'a');
	ft_printf("%10c", 't');
	ft_printf("%1c", 'y');
	ft_printf("%010c", 't');
	ft_printf("%50.2s", "Coucou");
	ft_printf("%50.2s", NULL);
	ft_printf("%5.0s", "Hello");
	ft_printf("%.1s", "Test");
	ft_printf("%10s", NULL);
	ft_printf("%10s", "Ok");
	ft_printf("%d\n", ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647));*/

  /*printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.%|\n", 10);
		n2 = ft_printf("|%*.%|\n", 10);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.*%|\n", 10, 10);
		n2 = ft_printf("|%*.*%|\n", 10, 10);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%10.1%|\n");
		n2 = ft_printf("|%10.1%|\n");
	printf ("n1 = %d, n2 = %d \n", n1,n2);

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.X|\n", 10, stre[5]);
		n2 = ft_printf("|%*.X|\n", 10, stre[5]);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

dprintf(1, "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

   printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%20.p|\n", NULL);
		n2 = ft_printf("|%20.p|\n", NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

   printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*p|\n", 20, "afiojfjadsifjaiosjf");
		n2 = ft_printf("|%*p|\n", 20, "afiojfjadsifjaiosjf");
	printf ("n1 = %d, n2 = %d \n", n1,n2);

printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%54p|\n", NULL);
		n2 = ft_printf("|%54p|\n", NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%20.p|\n", "test");
		n2 = ft_printf("|%20.p|\n", "test");
	printf ("n1 = %d, n2 = %d \n", n1,n2);

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%.p|\n", NULL);
		n2 = ft_printf("|%.p|\n", NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

 printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.p|\n", 0, NULL);
		n2 = ft_printf("|%*.p|\n", 0, NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);
dprintf(1, "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");

  printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%15s.-*0|\n", "bon-jour");
		n2 = ft_printf("|%15s.-*0|\n", "bon-jour");
	printf ("n1 = %d, n2 = %d \n", n1,n2);

   printf("pourcent 1 pourcent  \n" );
	n1 = printf("%1.10i\n", 581);
		n2 = ft_printf("%1.10i\n", 581);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%3.i\n", 100);
		n2 = ft_printf("%3.i\n", 100);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%.5d\n", -2372);
		n2 = ft_printf("%.5d\n", -2372);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%015p\n", NULL);
		n2 = ft_printf("%015p\n", NULL);
	printf ("n1 = %d, n2 = %d \n", n1,n2);*/

	
	
	/*printf("pourcent 1 pourcent  \n" );
	n1 = printf("neg9%*.*d\n", 15856, 155, -3000);
		n2 = ft_printf("neg9%*.*d\n", 15856, 155, -3000);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
		n2 = ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%01.50d]\n", -8473);
		n2 = ft_printf("%%p::[%01.50d]\n", -8473);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%010.1d]\n", -8473);
	printf("0000012345678901234567890\n");
		n2 = ft_printf("%%p::[%010.1d]\n", -8473);
			printf("0000012345678901234567890\n");

	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%0100.50d]\n", 8473);
		n2 = ft_printf("%%p::[%0100.50d]\n", 8473);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("%%p::[%0100.50d]\n", -8473);
		n2 = ft_printf("%%p::[%0100.50d]\n", -8473);
		//printf("00000123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
	printf ("n1 = %d, n2 = %d \n", n1,n2);*/


/*printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%-*.*x|\n", 150, 15, 12345);
		n2 = ft_printf("|%-*.*x|\n", 150, 15, 12345);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.*x|\n", 0, 1, 0);
		n2 = ft_printf("|%*.*x|\n", 0, 1, 0);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%020.2x|\n", INT_MAX);
		n2 = ft_printf("|%020.2x|\n", INT_MAX);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%*.5x|\n", -15, INT_MAX);
		n2 = ft_printf("|%*.5x|\n", -15, INT_MAX);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%.45x|\n", 0);
		n2 = ft_printf("|%.45x|\n", 0);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("pourcent 1 pourcent  \n" );
	n1 = printf("|%0.*x|\n", 10, stre[5]);
		n2 = ft_printf("|%0.*x|\n", 10, stre[5]);
	printf ("n1 = %d, n2 = %d \n", n1,n2);*/


}