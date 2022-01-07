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

	char *pointer;

	ac =2;
	av[0] = "";
	printf("---------------------------Debut-----------------------------------------\n");

	// [A - Tests without options].
	/*	printf("Test pourcentage seul : \n");
		printf("|"); printf("%"); printf("|"); n2 = ft_printf("%");printf("|========");
		printf("\n");
		*/	
	printf("Test 1 seul \n");
	printf("|"); n1 = printf("1"); printf("|"); 
	n2 = ft_printf("1");printf("|========");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test 2 pourcentages \n");
	printf("|"); n1 = printf("%%"); printf("|"); n2 = ft_printf("%%");printf("|========");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test 4 pourcentages \n");
	printf("|");  n1 =printf("%%%%"); printf("|"); n2 = ft_printf("%%%%");printf("|========");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test 6  pourcentages \n");
	printf("|");  n1 =printf("%%%%%%"); printf("|"); n2 = ft_printf("%%%%%%");printf("|========");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");


	printf("Test  1 caractere 1 \n");
	printf("|"); n1 =printf("%c", '1'); printf("|"); n2 = ft_printf("%c", '1');printf("|=======");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere negatif \n");
	printf("|"); n1 =printf("%c", -207); printf("|"); n2 = ft_printf("%c", -207);printf("|=======");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere > 256 \n");
	printf("|"); n1 =printf("%c", 256 + 48); printf("|"); n2 = ft_printf("%c", 256 + 48);printf("|===========");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere (3) + 2 pour cents  \n");
	printf("|"); n1 =printf("%c%%", '3'); printf("|"); n2 = ft_printf("%c%%", '3');printf("|=============");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere (0) + 0  \n");
	printf("|"); n1 =printf("0%c", 0); printf("|"); n2 = ft_printf("0%c", 0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere negatif (-129)  \n");
	printf("|"); n1 =printf("%c", -129); printf("|"); n2 = ft_printf("%c", -129);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  1 caractere special 128)  \n");
	//		printf("|"); n1 =printf("%c", 128); printf("|"); n2 = ft_printf("%c", 128);
	printf("|"); n1 =printf("%c", 0); printf("|"); n2 = ft_printf("%c",0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("********************************************************************\n");
	printf("********* Strings***************************************************\n");
	printf("********************************************************************\n");
	printf("\n");

	printf("Test  chaine Hello# )  \n");
	printf("|"); n1 =printf("%s", "Hello"); printf("|"); n2 = ft_printf("%s", "Hello");printf("| =====");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  chaine  Hello 3  + 2 pourcent)  \n");
	printf("|"); n1 =printf("%s%%", "Hello3"); printf("|"); n2 = ft_printf("%s%%", "Hello3");printf("| ====");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test  chaine vide  \n");
	printf("|"); n1 =printf("%s", ""); printf("|"); n2 = ft_printf("%s", "");printf("| =");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");


	printf("Test  chaine vide  1 \n");
	printf("|"); n1 =printf("%s", "1"); printf("|"); n2 = ft_printf("%s", "1");printf("| =");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("********************************************************************\n");
	printf("********* integer***************************************************\n");
	printf("********************************************************************\n");
	printf("\n");

	printf("Test avec entier 0 \n");
	printf("|"); n1 =printf("%i", 0); printf("|"); n2 = ft_printf("%i", 0);printf("|==");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("Test avec entier -1 \n");
	printf("|"); n1 =printf("%i", -1); printf("|"); n2 = ft_printf("%i", -1);printf("|==");
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("|"); n1 =printf("%i", -42); printf("|"); n2 = ft_printf("%i", -42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", 1); printf("|"); n2 = ft_printf("%i", 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", 42); printf("|"); n2 = ft_printf("%i", 42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", INT_MAX); printf("|"); n2 = ft_printf("%i", INT_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", INT_MAX + 1); printf("|"); n2 = ft_printf("%i", INT_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", INT_MIN); printf("|"); n2 = ft_printf("%i", INT_MIN);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", 1000); printf("|"); n2 = ft_printf("%i", 1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%i", -1000); printf("|"); n2 = ft_printf("%i", -1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("********************************************************************\n");
	printf("********* integer d ************************************************\n");
	printf("********************************************************************\n");
	printf("\n");
	printf("|"); n1 =printf("%d", 0); printf("|"); n2 = ft_printf("%d", 0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", -1); printf("|"); n2 = ft_printf("%d", -1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", -42); printf("|"); n2 = ft_printf("%d", -42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", 1); printf("|"); n2 = ft_printf("%d", 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", 42); printf("|"); n2 = ft_printf("%d", 42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", INT_MAX); printf("|"); n2 = ft_printf("%d", INT_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", INT_MAX + 1); printf("|"); n2 = ft_printf("%d", INT_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", INT_MIN); printf("|"); n2 = ft_printf("%d", INT_MIN);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", 1000); printf("|"); n2 = ft_printf("%d", 1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%d", -1000); printf("|"); n2 = ft_printf("%d", -1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);

	printf("********************************************************************\n");
	printf("********* integer u ************************************************\n");
	printf("********************************************************************\n");
	printf("\n");

	printf("\n");
	printf("|"); n1 =printf("%u", 0); printf("|"); n2 = ft_printf("%u", 0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	//	printf("|"); n1 =printf("%u curtieux   ", -1); printf("|"); n2 = ft_printf("%u", 1);
	//	n1 =printf("|%u curieux  | ", -1); n2 = ft_printf("|%u|",-1);
	printf("***************************************************************************\n");
	n1 = printf("|%u|",-1);
	printf("\n");
	n2 = ft_printf("|%u|",-1);
	printf("\n");
	//printf(" n1 = %d n2 = %d  ",printf(" print f | %u |",-1),ft_printf("| %u |",-1));
	printf(" n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("***************************************************************************\n");

	printf(" printf de 1 \n " );
	printf("|"); n1 =printf("%u", 1); printf("|"); n2 = ft_printf("%u", 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf(" printf de 42 \n " );
	printf("|"); n1 =printf("%u", 42); printf("|"); n2 = ft_printf("%u", 42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf(" printf de UINT_MAX \n " );
	printf("|"); n1 =printf("%u", UINT_MAX); printf("|"); n2 = ft_printf("%u", UINT_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf(" printf de UINT_MAX +1 \n " );
	printf("|"); n1 =printf("%u", UINT_MAX + 1); printf("|"); n2 = ft_printf("%u", UINT_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf(" printf de 1000 \n " );
	printf("|"); n1 =printf("%u", 1000); printf("|"); n2 = ft_printf("%u", 1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("********************************************************************\n");
	printf("********* integer x ************************************************\n");
	printf("********************************************************************\n");
	printf("\n");
	printf("|"); n1 =printf("%x", 0); printf("|"); n2 = ft_printf("%x", 0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", -1); printf("|"); n2 = ft_printf("%x", -1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", -42); printf("|"); n2 = ft_printf("%x", -42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", 1); printf("|"); n2 = ft_printf("%x", 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", 42); printf("|"); n2 = ft_printf("%x", 42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", INT_MAX); printf("|"); n2 = ft_printf("%x", INT_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", INT_MAX + 1); printf("|"); n2 = ft_printf("%x", INT_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", INT_MIN); printf("|"); n2 = ft_printf("%x", INT_MIN);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", 1000); printf("|"); n2 = ft_printf("%x", 1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 =printf("%x", -1000); printf("|"); n2 = ft_printf("%x", -1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("********************************************************************\n");
	printf("********* integer X ************************************************\n");
	printf("********************************************************************\n");
	printf("\n");
	printf("|"); n1 =printf("%X", 0); printf("|"); n2 = ft_printf("%X", 0);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("|"); n1 = printf("%X", -1); printf("|"); n2 = ft_printf("%X", -1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");

	printf("\n");
	printf("|"); n1 = printf("%X", -42); printf("|"); n2 = ft_printf("%X", -42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", 1); printf("|"); n2 = ft_printf("%X", 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", 42); printf("|"); n2 = ft_printf("%X", 42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", INT_MAX); printf("|"); n2 = ft_printf("%X", INT_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", INT_MAX + 1); printf("|"); n2 = ft_printf("%X", INT_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", INT_MIN); printf("|"); n2 = ft_printf("%X", INT_MIN);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", 1000); printf("|"); n2 = ft_printf("%X", 1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%X", -1000); printf("|"); n2 = ft_printf("%X", -1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");

	printf("********************************************************************\n");
	printf("********* pointer ************************************************\n");
	printf("********************************************************************\n");
	printf("\n");
	//printf("|"); n1 = printf("%p", (void*)1); printf("|"); n2 = ft_printf("%p", (void*)1);
	n1 = printf("|%p|", (void*)1); n2 = ft_printf("|%p|", (void*)1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%p", (void*)-1); printf("|"); n2 = ft_printf("%p", (void*)-1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%p", (void*)42); printf("|"); n2 = ft_printf("%p", (void*)42);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%p", (void*)1000); printf("|"); n2 = ft_printf("%p", (void*)1000);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%p", (void*)ULONG_MAX); printf("|"); n2 = ft_printf("%p", (void*)ULONG_MAX);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	printf("\n");
	printf("\n");
	printf("|"); n1 = printf("%p", (void*)ULONG_MAX + 1); printf("|"); n2 = ft_printf("%p", (void*)ULONG_MAX + 1);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	 printf("\n");
	 pointer = malloc(100);
	n1 = printf("|%p|", pointer); n2 = ft_printf("|%p|", pointer);
	printf("\n  n1 = %d n2 = %d  ",n1,n2);
	 printf("\n");
	 free(pointer);
}		
