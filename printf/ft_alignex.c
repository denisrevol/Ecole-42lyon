#include "libftprintf.h"

#include <stdio.h>

void    ft_align(t_printf tpf, t_flags *flag, char *str)
{
    unsigned long int     j;
    char                    *strtemp;
    int                     k;
    char                    *null;
    

    j = 0;
    k = 0;
    null = "(null)";
    //strtemp = NULL;

//dprintf(1, "zero = %d  et left = %d  et right = %d  et strlen = %zu  et point = %zu  et star = %d  et pt = %d et hexa = %d et str = %s \n",
//flag->zero, flag->left, flag->right, ft_strlen(str), flag->point, flag->star, flag->pt, flag->hexa, str);
//dprintf(1, "nb alignnb = %ld\n", nb);
  // dprintf(1, "entree align\n");
  //dprintf(1, "str = %s \n", str);
    if (flag->zero == 1 || (flag->point != 0 && flag->point < ft_strlen(str)))
        *tpf.tmp = ' ';
    if ((int)ft_strlen(str) < flag->right || flag->pt == 1)
    {
    //  dprintf(1, "coucou1\n");
        if (str == NULL)
        {
          //  dprintf(1, "COUCOU\n");
            if (flag->pt == 1 && flag->right == 0)
            {
             //  dprintf(1, "coucou2\n");
                while( j < flag->point && j < ft_strlen(null))
                {
                     //   dprintf(1, "coucou\n");
                    ft_putchar(null[j]);
                    if (flag->left == 0)
                         *tpf.nb = *tpf.nb + 1;
                    j++;
                }
            }
            else if ((flag->right - 6) < 0)
            {
           
                ft_putstr("(null)");
                *tpf.nb = *tpf.nb + flag->right;
            }
            else
            {
               // dprintf(1, "coucou3\n");
                if (flag->zero != 1 && str != NULL)
                {
                    while (flag->right > 0 && j < ((unsigned long )flag->right - 6))
                    {
                        ft_putchar(' ');
                        j++;
                    }
                   
                    ft_putstr("(null)");
                }
                else
                {
                    if (flag->point > 0)
                    {
                        if (flag->point < ft_strlen(str))
                        {
                            while (flag->right > 0 && j < (((unsigned long )flag->right) - flag->point))
                            {
                                ft_putchar(' ');
                                j++;
                            } 
                        }
                        else
                        {
                            //dprintf(1, "ftstrlen = %zu\n", ft_strlen(str));
                            if (str == NULL)
                            {
                                if (flag->point < 6)
                                {
                                    while (flag->right > 0 && j < (((unsigned long )flag->right) - 6 + flag->point))
                                    {
                                        ft_putchar(' ');
                                        j++;
                                    }  
                                }
                                else
                                {
                                    while (flag->right > 0 && j < (((unsigned long )flag->right) - 6))
                                    {
                                        ft_putchar(' ');
                                        j++;
                                    }  
                                }
                                  
                            }
                            else
                            {
                                   
                                while (flag->right > 0 && j < (((unsigned long )flag->right) - ft_strlen(str)))
                                {
                                    ft_putchar(' ');
                                    j++;
                                }  
                            }  
                        }
                        
                    }
                    else
                    {
                        while (flag->right > 0 && j < ((unsigned long )flag->right))
                        {
                            ft_putchar(' ');
                            j++;
                        }
                    }
                    
                    
                }
                
            }
        }
        else
        {
          // dprintf(1, "right = %d  et strlen = %lu  et res = %d\n", flag->right, ft_strlen(str), flag->right - (int)ft_strlen(str));
            if (flag->point == 0)
            {
                while (flag->right > 0 && (int)j < (flag->right - (int)ft_strlen(str)))
                {
                    //dprintf(1, "coucou1\n");
                    ft_putchar(*tpf.tmp);
                    j++;
                }
            }
            else
            {
                if (flag->point > ft_strlen(str))
                {
                    while (flag->right > 0 && (int)j < (flag->right - (int)ft_strlen(str)))
                    {
                          // dprintf(1, "coucou2\n");
                        ft_putchar(*tpf.tmp);
                        j++;
                    }
                }
                else
                {
                    while (flag->right > 0 && (int)j < (flag->right - (int)ft_strlen(str)))
                    {
                       //dprintf(1, "coucou3\n");
                        ft_putchar(*tpf.tmp);
                        j++;
                    }
                }
                
            }
            
        }
   }

    if (flag->pt == 1 && flag->point > 0)
    {
           // dprintf(1, "coucou4\n");
        if (flag->hexa == 1)
        {
            //dprintf(1, "flag hexa = 1\n");
            while ((k < (int)(flag->point - ft_strlen(str))))
            {
                ft_putchar('0');
                k++;
            }
            //*tpf.nb = *tpf.nb + k;
           // ft_putstr(str);
        }
        else
        {
            if (str == NULL && flag->right != 0)
                   strtemp = ft_strsub(null, 0, flag->point);
            else
                   strtemp = ft_strsub(str, 0, flag->point);
           //dprintf(1, "strtemp = %s\n", strtemp);
            str = strtemp;
           free(strtemp);
        }
    }
    if (flag->right == 0 && flag->left == 0 && flag->pt != 1 && str == NULL)
    {
  //      dprintf(1, "troisieme\n");
        ft_putstr(null);
        *tpf.nb = *tpf.nb + 6;
    }
    else 
    {
        if (str == NULL && flag->pt != 1)
        {
            str = null;
            //flag->left = flag->left - 6;
        }
        //dprintf(1, "coucou\n");
        ft_putstr(str);
    }
    j = 0;
  // dprintf(1, "tpf.nb = %d  et flag left = %d\n", *tpf.nb, flag->left);
    if((int)ft_strlen(str) < flag->left)
    {
      /*  if (flag->point < ft_strlen(str) && flag->point != 0)
        {
                              dprintf(1, "coucou2\n");

            while (flag->left > 0 && j < (flag->left - flag->point))
            {
                ft_putchar(*tpf.tmp);
                j++;
               // dprintf(1, "j = %ld\n", j);
            } 
        }
        else

        {*/
            if (str == NULL && flag->point >= 6)
            {
                          //        dprintf(1, "coucou1\n");

                while (flag->left > 0 && (int)j < (flag->left - 6))
                {
                ft_putchar(*tpf.tmp);
                j++;
                }
            }
            else if (str == NULL && flag->point < 6)
            {
                while (flag->left > 0 && j < (flag->left - flag->point))
                {
                 // dprintf(1, "coucou2\n");
                    ft_putchar(*tpf.tmp);
                    j++;
                }
            }
            else
            {
               // if (flag->st == 1)
                //    j = j + 1;
               // dprintf(1, "str = %set\n", str);
              if (flag->point < ft_strlen(str) || flag->st == 1)
              {
                    while (flag->left > 0 && j < (flag->left - ft_strlen(str)))
                    {
                      // dprintf(1, "j = %ld\n", j);
                                      //dprintf(1, "coucou3\n");
                                        //dprintf(1, "str = %set\n", str);

                        ft_putchar(*tpf.tmp);
                        j++;
                    }
              }
               else
               {
                   {
                       while (flag->left > 0 && j < (flag->left  - flag->point))
                    {
                       // dprintf(1, "j = %ld\n", j);
                                      // dprintf(1, "coucou4\n");
                                        //dprintf(1, "str = %set\n", str);

                        ft_putchar(*tpf.tmp);
                        j++;
                    }
                   }
               }
               
            }
      // }
        
        
    }
        if (flag->left > 0)
        {
            if (flag->left > (int)ft_strlen(str))
                *tpf.nb = *tpf.nb + flag->left;
            else
                *tpf.nb =*tpf.nb + ft_strlen(str);
        }
        else if (flag->right > 0)
        {
            if (flag->right > (int)ft_strlen(str))
                    *tpf.nb = *tpf.nb  + flag->right;
            else
                *tpf.nb = *tpf.nb + ft_strlen(str);
        }
        else
        {
            if (ft_strlen(str) == 0)
                     *tpf.nb =*tpf.nb + 1;
            else
            {
                if (flag->point < ft_strlen(str))
                    *tpf.nb = *tpf.nb + ft_strlen(str);
                else
                    *tpf.nb = *tpf.nb + flag->point;
                
            }
        }
}