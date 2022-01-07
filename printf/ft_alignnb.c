/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:06:45 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 10:14:30 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_alignnb_first(t_printf tpf, t_flags *flag, long int nb, int p)
{
	int		j;

	j = 0;
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
		*tpf.nb = *tpf.nb + j;
	}
}

void	ft_alignnb_pt_if(t_printf tpf, t_flags *flag, long int nb)
{
	int		k;
	int		len;

	k = 0;
	len = ft_nblen(nb);
	while (k < (flag->point - len))
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
			*tpf.nb = *tpf.nb + 1;
		}
		ft_putnbr(0);
		k++;
	}
	ft_putnbr(nb);
	*tpf.nb = *tpf.nb + k + ft_nblen(nb);
}

void	ft_alignnb_else_else(t_printf tpf, t_flags *flag, long int nb)
{
	if (flag->right > 0 && flag->zero != 2
			&& nb == 0 && flag->point == 0)
		ft_putstr(" ");
	if (flag->pt == 1 && flag->point == 0 && flag->star != 2 && nb == 0)
	{
		ft_putstr("");
		*tpf.nb = *tpf.nb + 1;
	}
	else
	{
		ft_putnbr(nb);
		*tpf.nb = *tpf.nb + ft_nblen(nb);
	}
}

void	ft_alignnb_else(t_printf tpf, t_flags *flag, long int nb)
{
	if (flag->zero == 1 && nb != 0)
	{
		ft_putnbr(nb);
		*tpf.nb = *tpf.nb + ft_nblen(nb);
	}
	else if (flag->zero == 1 && nb == 0)
	{
		if (flag->right > 0)
		{
			ft_putstr(" ");
			*tpf.nb = *tpf.nb + 1;
		}
		else if (flag->left == 0)
			ft_putstr("");
		else
		{
			ft_putchar(*tpf.tmp);
			*tpf.nb = *tpf.nb + 1;
		}
	}
	else
		ft_alignnb_else_else(tpf, flag, nb);
}

void	ft_alignnb(t_printf tpf, t_flags *flag, long int nb)
{
	int		p;

	p = flag->point - ft_nblen(nb);
	if (p < 0)
		p = 0;
	ft_alignnb_first(tpf, flag, nb, p);
	if (nb == 0 && flag->pt_alone == 2)
		ft_alignnb_null(tpf, flag);
	else
	{
		if (flag->pt == 1)
		{
			if (ft_nblen(nb) <= flag->point)
				ft_alignnb_pt_if(tpf, flag, nb);
			else
				ft_alignnb_else(tpf, flag, nb);
		}
		else
		{
			ft_putnbr(nb);
			*tpf.nb = *tpf.nb + ft_nblen(nb);
		}
		ft_alignnb_left(tpf, flag, nb);
	}
}
