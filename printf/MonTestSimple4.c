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
	printf("*********4 eme   serie test");
	printf("********************************************************************\n");
	printf("\n");

	n1=printf("%01i\n", 0) ; n2=ft_printf("%01i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02i\n", 0) ; n2=ft_printf("%02i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010i\n", 0) ; n2=ft_printf("%010i\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01i\n", -1) ; n2=ft_printf("%01i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02i\n", -1) ; n2=ft_printf("%02i\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("TEST -1 i\n");
	n1=printf("%03i printf \n", -1) ; n2=ft_printf("%03i mon pf \n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%04i printf \n", -1) ; n2=ft_printf("%04i mon pf \n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%05i printf \n", -1) ; n2=ft_printf("%05i mon pf \n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	n1=printf("%09i\n", INT_MAX) ; n2=ft_printf("%09i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010i\n", INT_MAX) ; n2=ft_printf("%010i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%011i\n", INT_MAX) ; n2=ft_printf("%011i\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01d\n", 0) ; n2=ft_printf("%01d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02d\n", 0) ; n2=ft_printf("%02d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010d\n", 0) ; n2=ft_printf("%010d\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01d\n", -1) ; n2=ft_printf("%01d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02d\n", -1) ; n2=ft_printf("%02d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("TEST -1 d\n");
	n1=printf("%03d\n", -1) ; n2=ft_printf("%03d\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%09d\n", INT_MAX) ; n2=ft_printf("%09d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010d\n", INT_MAX) ; n2=ft_printf("%010d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%011d\n", INT_MAX) ; n2=ft_printf("%011d\n", INT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01u\n", 0) ; n2=ft_printf("%01u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02u\n", 0) ; n2=ft_printf("%02u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010u\n", 0) ; n2=ft_printf("%010u\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01u\n", -1) ; n2=ft_printf("%01u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02u\n", -1) ; n2=ft_printf("%02u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("TEST -1 u\n");
	n1=printf("%03u\n", -1) ; n2=ft_printf("%03u\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%09u\n", UINT_MAX) ; n2=ft_printf("%09u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010u\n", UINT_MAX) ; n2=ft_printf("%010u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%011u\n", UINT_MAX) ; n2=ft_printf("%011u\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf(" petit  X\n");
	n1=printf("%01x\n", 0) ; n2=ft_printf("%01x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02x\n", 0) ; n2=ft_printf("%02x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010x\n", 0) ; n2=ft_printf("%010x\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01x\n", -1) ; n2=ft_printf("%01x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02x\n", -1) ; n2=ft_printf("%02x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("TEST -1 x\n");
	n1=printf("%03x\n", -1) ; n2=ft_printf("%03x\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%09x\n", UINT_MAX) ; n2=ft_printf("%09x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010x\n", UINT_MAX) ; n2=ft_printf("%010x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%011x\n", UINT_MAX) ; n2=ft_printf("%011x\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf(" Grand X \n");
	n1=printf("%01X\n", 0) ; n2=ft_printf("%01X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02X\n", 0) ; n2=ft_printf("%02X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010X\n", 0) ; n2=ft_printf("%010X\n", 0);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%01X\n", -1) ; n2=ft_printf("%01X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%02X\n", -1) ; n2=ft_printf("%02X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	printf("TEST -1 X\n");
	n1=printf("%03X\n", -1) ; n2=ft_printf("%03X\n", -1);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%09X\n", UINT_MAX) ; n2=ft_printf("%09X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%010X\n", UINT_MAX) ; n2=ft_printf("%010X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%011X\n", UINT_MAX) ; n2=ft_printf("%011X\n", UINT_MAX);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%0-10d\n", 42) ; n2=ft_printf("%0-10d\n", 42);
	printf ("n1 = %d, n2 = %d \n", n1,n2);

	n1=printf("%-010d\n", 42) ; n2=ft_printf("%-010d\n", 42);
	ft_printf ("n1 = %d, n2 = %d \n", n1,n2);
}		
