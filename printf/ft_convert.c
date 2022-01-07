/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:19:14 by drevol            #+#    #+#             */
/*   Updated: 2020/04/08 13:33:05 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_c(va_list ap, t_printf tpf, t_flags *flag)
{
	char			*str;
	int				st;

	str = NULL;
	st = va_arg(ap, unsigned);
	while (st < 0)
		st = st + 256;
	while (st > 256)
		st = st - 256;
	if (st == 0 || st == 256)
		flag->st = 1;
	else
		str = (char*)&st;
	ft_align(tpf, flag, str);
}

void	ft_convert_sp(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	char			*str;

	if (tpf.src[i] == 's')
	{
		str = va_arg(ap, char*);
		if (flag->zero == 1 || tpf.src[i - 1] == '.')
			str = "";
		ft_align(tpf, flag, str);
	}
	if (tpf.src[i] == 'p')
	{
		str = ft_itoabaseuli(va_arg(ap, unsigned long int), "0123456789abcdef");
		ft_alignp(tpf, flag, str);
		free(str);
	}
}

void	ft_convert_di_if(t_printf tpf, t_flags *flag, int nb)
{
	if (flag->star == 2 && nb != 0)
	{
		ft_putnbr(nb);
		*tpf.nb = *tpf.nb + 2;
	}
	else
		ft_alignnb(tpf, flag, nb);
}

void	ft_convert_di_else(t_printf tpf, t_flags *flag, long int nb)
{
	if (nb < 0 && (flag->right > 0 || flag->pt == 1)
			&& (flag->point > 0 || flag->zero == 2))
	{
		if (flag->point == 0)
		{
			ft_putchar('-');
			flag->right = flag->right - 1;
			*tpf.nb = *tpf.nb + 1;
			flag->neg = 1;
			ft_alignnb(tpf, flag, -nb);
		}
		else
		{
			*tpf.tmp = ' ';
			ft_alignnb(tpf, flag, nb);
		}
	}
	else
	{
		if (ft_nblen(nb) > flag->point && flag->point != 0)
			*tpf.tmp = ' ';
		ft_alignnb(tpf, flag, nb);
	}
}

void	ft_convert(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	long int		nb;

	nb = 0;
	if (tpf.src[i] == 'c')
		ft_convert_c(ap, tpf, flag);
	if (tpf.src[i] == 's' || tpf.src[i] == 'p')
		ft_convert_sp(ap, tpf, flag, i);
	if (tpf.src[i] == 'd' || tpf.src[i] == 'i')
	{
		nb = (long int)va_arg(ap, int);
		if (flag->pt == 1 && nb == 0 && flag->point == 0 && flag->right == 0
				&& flag->left == 0)
		{
			ft_convert_di_if(tpf, flag, nb);
		}
		else
		{
			ft_convert_di_else(tpf, flag, nb);
		}
	}
	ft_convert_bis(ap, tpf, flag, i);
	ft_flaginit(flag);
}
