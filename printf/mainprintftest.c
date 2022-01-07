#include "libftprintf.h"

#include <stdio.h>

int main()
{
    char*str;
    int i;

    str = "test";
    i = 10;


    printf("%.0p",&i);
    printf("%0p",i);
    printf("%0p",&i);
    printf("%01p",i);
    printf("%02p",i);
    printf("%03p",i);
    printf("%04p",i);
    printf("%040p",i);

    printf("%.1p",i);
    printf("%.2p",i);
    printf("%.3p",i);
    printf("%.4p",i);
    printf("%.10p",i);
    printf("%.40p",i);

    printf("%40.40p",i);
    printf("%40.38p",i);
    printf("%38.40p",i);

    printf("%1.4p",i);
    printf("%1.1p",i);
    printf("%2.2p",i);
    printf("%4.1p",i);
    printf("%18.0p",i);
    printf("%1.0p",i);
    printf("%18.0p",i);
    printf("%10.20p",i);
    printf("%10.10p",i);
    printf("%01p",i);
    printf("%02p",i);
    printf("%04p",i);
    printf("%010p",i);
    printf("%10.0p",i);
    printf("%10.2p",i);
    printf("%10.4p",i);
    printf("%10.10p",i);
    printf("%10.0p",i);
    printf("%10.2p",i);
    printf("%10.4p",i);
    printf("%10.10p",i);
    printf("%10.20p",i);


    return (0);
}
