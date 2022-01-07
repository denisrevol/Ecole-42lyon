#include "libftprintf.h"

#include <stdio.h>

void    ft_align(t_printf tpf, t_flags *flag, char *str)
{
    unsigned long int     j;
    char                    *strtemp;
    int                     k;
    char                    *null;
    int                     p;
    

    j = 0;
    k = 0;
    p = 0;
    null = "(null)";
    strtemp = NULL;

//dprintf(1, "zero = %d  et left = %d  et right = %d  et strlen = %zu  et point = %zu  et star = %d  et pt = %d et hexa = %d  et st = %d et str = %s  et pt_alone = %d\n",
//flag->zero, flag->left, flag->right, ft_strlen(str), flag->point, flag->star, flag->pt, flag->hexa, flag->st,  str, flag->pt_alone);

   if (str == NULL)
   {
     // dprintf(1, "coucou3\n");
      str = null;
   }
    if ((flag->zero == 1 && *str != '%') || (flag->point != 0 && flag->point < ft_strlen(str)))
        *tpf.tmp = ' ';
    if (flag->right > 0 && ft_strlen(str) > 0 && (flag->point == 0 || (flag->point > ft_strlen(str) && flag->hexa != 1) ||
     (flag->point < ft_strlen(str) && flag->hexa == 1)))
       {
          // dprintf(1 , "coucou2\n");
            p = flag->right - ft_strlen(str);
       }
    else if ((flag->right > 0 && flag->point < ft_strlen(str)) || (flag->point >= ft_strlen(str) && flag->hexa == 1 && flag->pt_alone != 2))
    {
        //dprintf(1 , "coucou1\n");
        p = flag->right - flag->point;
    }
    else if (flag->right > 0 && flag->point == 0 && str == NULL)
    {
       // dprintf(1 , "coucou\n");
        p = flag->right - 6;
    }
    else if (flag->right > 0 && flag->pt_alone == 2)
    {
        p = flag->right;
    }
    else if (flag->right > 0 && flag->point == 0)
         p = flag->right;
    if (flag->pt == 1 && flag->hexa == 1 && (int)flag->point < flag->right)
        *tpf.tmp = ' ';
    while (flag->right > 0 && (int)j < p)
    {
        ft_putchar(*tpf.tmp);
        j++;
    }
    if (flag->pt == 1 && flag->point > 0)
    {
        if (flag->hexa == 1 && flag->point > 0)
        {
            while ((k < (int)(flag->point - ft_strlen(str))))
            {
                ft_putchar('0');
                k++;
            }
        }
        else
        {
            if (str == NULL && flag->right != 0)
                   strtemp = ft_strsub(null, 0, flag->point);
            else
                   strtemp = ft_strsub(str, 0, flag->point);
            str = strtemp;
            free(strtemp);
        }
    }
    if (flag->right == 0 && flag->left == 0 && flag->pt != 1 && str == NULL)
    {
      //  dprintf(1, "coucou1\n");
        ft_putstr(null);
        *tpf.nb = *tpf.nb + 6;
    }
    else 
    {
       
        if (str == NULL && flag->pt != 1)
        {
          // dprintf(1, "coucou2\n");
            str = null;
        }
        if ((*str == '0' && flag->point == 0 && flag->zero == 1) || (*str == '0' && flag->pt_alone == 2))
        {
            *str = ' ';
        }
      /*  if (flag->st == 1)
        {
            //dprintf(1, "c'est la \n");
            ft_putchar(0);
        }
        else*/
            ft_putstr(str);
    }
    j = 0;
    p = 0;
    if (flag->left > 0 && str == NULL && flag->point >= 6)
        p = 6;
    else if (flag->left > 0 && str == NULL && flag->point < 6)
        p = flag->left  - flag->point;
    else if ((flag->left > 0 && flag->point < ft_strlen(str)) || flag->st == 1)
        p = flag->left  - ft_strlen(str) - flag->st;
    else if (flag->left > 0 && flag->hexa == 1)
        p = flag->left  - flag->point;
    else if (flag->left > 0)
        p = flag->left  - ft_strlen(str);
    while (flag->left > 0 && (int)j < p)
    {
        ft_putchar(*tpf.tmp);
        j++;
    }
   //dprintf(1, "tpf.nb = %d\n", *tpf.nb);
        if (flag->left > 0)
        {
            if (flag->left > (int)ft_strlen(str))
                *tpf.nb = *tpf.nb + flag->left;
            else
                *tpf.nb =*tpf.nb + ft_strlen(str);
        }
        else if (flag->right > 0)
        {
            if (flag->right > (int)ft_strlen(str) )
            {
              //dprintf(1, "coucou\n");
                if ((int)flag->point > flag->right)
                    *tpf.nb = *tpf.nb  + flag->point;
                else
                {
                 // dprintf(1, "coucou4\n");
                    *tpf.nb = *tpf.nb  + flag->right;
                }
            }
            else
            {
                if ((int)flag->point > flag->right)
                {
                               //  dprintf(1, "coucou1\n");
                    if (flag->point < ft_strlen(str))
                        *tpf.nb = *tpf.nb + flag->point;
                    else
                    {
                        if (flag->hexa == 1)
                            *tpf.nb = *tpf.nb + flag->point;
                        else
                            *tpf.nb = *tpf.nb + ft_strlen(str);
                    }
                }
                else
                {
                  //dprintf(1, "coucou3\n");
                    *tpf.nb = *tpf.nb + ft_strlen(str);
                }
            }
        }
        else
        {
           //dprintf(1, "coucou2\n");
           if (flag->st == 1)
            {
                //dprintf(1, "coucou4\n");
                     *tpf.nb =*tpf.nb + 1;
            }
            else
            {
                
                if (flag->point != 0 && flag->point < ft_strlen(str))
                {
                    //dprintf(1, "coucou5\n");
                    if (flag->hexa == 1)
                        *tpf.nb = *tpf.nb + ft_strlen(str);
                    else
                        *tpf.nb = *tpf.nb + flag->point;
                }
                else if (flag->hexa == 1 && flag->point > 0)
                {
                    //dprintf(1, "coucou6\n");
                    *tpf.nb = *tpf.nb + flag->point;
                }
                else
                {
                    //dprintf(1, "coucou7\n");
                    *tpf.nb = *tpf.nb + ft_strlen(str);
                }
                
            }
        }
        //dprintf(1, "tpf.nb sortie  = %d\n", *tpf.nb);
}