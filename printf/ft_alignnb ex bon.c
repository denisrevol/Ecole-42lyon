/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <drevol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:29:36 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 11:04:49 by drevol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_alignnb(t_printf tpf, t_flags *flag, long int nb)
{
	int		j;
	int		k;
	int		p;
	int		len;

	//dprintf(1, "zero = %d  et left = %d  et right = %d  et nblen = %d  et point = %zu  et star = %d  et pt = %d et nb = %li et pt_alone = %d\n", flag->zero, flag->left, flag->right, ft_nblen(nb), flag->point, flag->star, flag->pt, nb, flag->pt_alone);
	//dprintf(1, "nb alignnb = %ld\n", nb);
	j = 0;
	k = 0;
	p = flag->point - ft_nblen(nb);
	if (p < 0)
		p = 0;
	if (nb < 0 && flag->point > 0)
		flag->point = flag->point + 1;
	if (flag->zero == 1 || (flag->zero == 2 && flag->point > 0
	&& flag->point < flag->right))
	{
		*tpf.tmp = ' ';
	}
	if (ft_nblen(nb) < flag->right)
	{
		if (flag->right > 0 && flag->point > 0
	&& flag->point > ft_nblen(nb) && nb < 0)
			flag->right = flag->right - 1;
		while (flag->right > 0 && j < (flag->right - ft_nblen(nb) - p))
		{
			ft_putchar(*tpf.tmp);
			j++;
		}
		if (flag->right > 0 && flag->point > 0
	&& flag->point > ft_nblen(nb) && nb < 0)
			flag->right = flag->right + 1;
	}
	if (nb == 0 && flag->pt_alone == 2)
	{
		if (flag->right > 0)
			ft_putstr(" ");
		else
			ft_putstr("");
	}
	else
	{
		if (flag->pt == 1)
		{
			if (ft_nblen(nb) <= flag->point)
			{
				len = ft_nblen(nb);
				while (k < (flag->point - len))
				{
					if (nb < 0)
					{
						ft_putchar('-');
						nb = -nb;
					}
					ft_putnbr(0);
					k++;
				}
				ft_putnbr(nb);
			}
			else
			{
				if (flag->zero == 1 && nb != 0)
				{
					ft_putnbr(nb);
				}
				else if (flag->zero == 1  && nb == 0)
				{
					if (flag->right > 0)
						ft_putstr(" ");
					else if (flag->left == 0)
						ft_putstr("");
					else
						ft_putchar(*tpf.tmp);
				}
				else
				{
					if (flag->right > 0 && flag->zero != 2
	&& nb == 0 && flag->point == 0)
					{
						ft_putstr(" ");
					}
					if (flag->pt == 1 && flag->point == 0
	&& flag->star != 2 && nb == 0)
						ft_putstr("");
					else
					{
						ft_putnbr(nb);
					}
				}
			}
		}
		else
			ft_putnbr(nb);
	}
	j = 0;
	if (ft_nblen(nb) > flag->point)
	{
		while (flag->left > 0 && j < (flag->left - ft_nblen(nb)))
		{
			ft_putchar(*tpf.tmp);
			j++;
		}
	}
	else
	{
		while (flag->left > 0 && j < (flag->left - flag->point))
		{
			ft_putchar(*tpf.tmp);
			j++;
		}
	}
	if (flag->left > 0)
	{
		if (flag->left > ft_nblen(nb))
			*tpf.nb = *tpf.nb + flag->left;
		else
			*tpf.nb = *tpf.nb + ft_nblen(nb);
	}
	else if (flag->right > 0 && flag->right > flag->point)
	{
		if (flag->right > ft_nblen(nb) || flag->point > ft_nblen(nb))
		{
			if (flag->zero == 0)
			{
				if (flag->right > flag->point)
					*tpf.nb = *tpf.nb + flag->right + flag->neg;
				else
					*tpf.nb = *tpf.nb + flag->point + flag->neg;
			}
			else
				*tpf.nb = *tpf.nb + flag->right;
		}
		else
			*tpf.nb = *tpf.nb + ft_nblen(nb);
	}
	else
	{
		if (flag->pt == 1 && flag->point == 0 && nb == 0
	&& flag->star != 1 && flag->left == 0 && flag->right == 0
	&& flag->zero != 0 && flag->zero != 2)
		{
			*tpf.nb = *tpf.nb + ft_nblen(nb) - 1;
		}
		else if (ft_nblen(nb) < flag->point)
			*tpf.nb = *tpf.nb + flag->point;
		else
		{
			if (flag->pt == 1 && flag->point == 0 && flag->star != 2 && nb == 0)
				*tpf.nb = *tpf.nb + ft_nblen(nb) - 1;
			else
				*tpf.nb = *tpf.nb + ft_nblen(nb);
		}
	}
}
