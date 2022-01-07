#include "libftprintf.h"

#include <stdio.h>

void    ft_alignui(t_printf tpf, t_flags *flag, unsigned int nb)
{
    int     j;
    int     k;
    int     p;

dprintf(1, "falg zero = %d et flag left = %d  et flag right = %d  et flag point = %zu nb = %d\n", flag->zero, flag->left, flag->right, flag->point, nb);
 /*   j = 0;
    k = 0;
    if (ft_nblen(nb) < flag->right)
    {
     while (flag->right > 0 && j < (flag->right - ft_nblen(nb)))
       {
           ft_putchar(*tpf.tmp);
           j++;
       }
    }*/
   /* if (flag->pt == 1 /&& flag->point > 0/)
            {
                if (ft_nblen(nb) <= (int)flag->point)
                    {
                        while ( k < ((int)flag->point - ft_nblen(nb)))
                            {
                                ft_putnbr(0);
                                k++;
                            }
                        ft_putnbr(nb);
                    *tpf.nb = *tpf.nb + k;
                    }
                else
                    ft_putnbr(nb);
            }
    else
        ft_putnbr(nb);
        j = 0;
        while (flag->left > 0 && j < (flag->left - ft_nblen(nb)))
        {
            ft_putchar(*tpf.tmp);
            j++;
        }*/
         j = 0;
    k = 0;
    p = (int)flag->point - ft_nblen(nb);
    if (p < 0)
        p = 0;
    if (flag->zero == 1)
        *tpf.tmp = ' ';
    if (ft_nblen(nb) < flag->right)
    {
     while (flag->right > 0 && j < (flag->right - ft_nblen(nb) - p))
       {
           ft_putchar(*tpf.tmp);
           j++;
       }
    }
    if (flag->pt == 1)
        {
            dprintf(1, "coucou\n");
            if (ft_nblen(nb) < (int)flag->point)
            {
                
                while ( k < ((int)flag->point - ft_nblen(nb)))
                {
                    ft_putnbr(0);
                    k++;
                }
                ft_putnbr(nb);
                    *tpf.nb = *tpf.nb + k;
            }
            else
            {
                dprintf(1, "coucou1\n");
                if (flag->zero == 1 && nb != 0)
                    ft_putnbr(nb);
               else
                //   ft_putchar(*tpf.tmp);
                ft_putnbr(nb);
            }
    }
    else
    {
    //    dprintf(1, "nb putnbr = %ld\n", nb);
                ft_putnbr(nb);
    }
        j = 0;
        if ((int)flag->point < ft_nblen(nb))
        {
            while (flag->left > 0 && j < ((flag->left - ft_nblen(nb))))
            {
                ft_putchar(*tpf.tmp);
                j++;
            }
        }
        else
        {
            while (flag->left > 0 && j < (flag->left - (int)flag->point))
            {
                ft_putchar(*tpf.tmp);
                j++;
            }
        }
        
        if (flag->left > 0)
        {
            //dprintf(1, "coucou1\n");
            dprintf(1, "tpf.nb = %d\n", *tpf.nb);
            if (flag->left > ft_nblen(nb))
                *tpf.nb = *tpf.nb + flag->left;
            else
                *tpf.nb = *tpf.nb + ft_nblen(nb);
        }
        else if (flag->right > 0)
        {
            //dprintf(1, "coucou2\n");
            if(flag->right > ft_nblen(nb))
                *tpf.nb = *tpf.nb  + flag->right;
            else
                *tpf.nb = *tpf.nb + ft_nblen(nb);
        }
        else
        {
            //dprintf(1, "coucou3\n");
            if (flag->pt == 1 && flag->point == 0 && nb == 0 && flag->star != 1)
            {
                *tpf.nb =*tpf.nb + ft_nblen(nb) - 1;
            }
            else
                 *tpf.nb = *tpf.nb + ft_nblen(nb);
        }
        
}