/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignnb_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:19:39 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 10:22:00 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void		ft_alignnb_left(t_printf tpf, t_flags *flag, long int nb)
{
	int		j;
	int		k;

	j = 0;
	k = 0;
	while (j < (flag->left - ft_nblen(nb)) && ft_nblen(nb) > flag->point)
	{
		ft_putchar(' ');
		j++;
	}
	while (k < (flag->left - flag->point) && ft_nblen(nb) <= flag->point)
	{
		ft_putchar(' ');
		k++;
	}
	if (flag->left > 0 && flag->point > 0 && flag->point > ft_nblen(nb))
		*tpf.nb = *tpf.nb + j + k;
	else
		*tpf.nb = *tpf.nb + j + k;
}
