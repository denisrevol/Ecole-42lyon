#include <stdio.h>
#include "printf.h"

void	ft_putnbr_base(int nbr, char *base);

int     main()
{
    int     nbr = 65535;
    char *base = "0123456789abcdef";

    ft_putnbr_base(nbr, base);

    return (0);
}