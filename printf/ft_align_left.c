/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_align_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 17:40:10 by drevol            #+#    #+#             */
/*   Updated: 2020/04/10 17:43:09 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_align_left(t_printf tpf, t_flags *flag, char *str, int p)
{
	int		j;

	j = 0;
	if (flag->left > 0 && ft_strcmp(str, "(null)") == 0 && flag->point >= 6)
		p = 6;
	else if (flag->left > 0 && ft_strcmp(str, "(null)") == 0 && flag->point < 6)
	{
		if (flag->point == 0)
			p = flag->left - flag->point - 6;
		else
			p = flag->left - flag->point;
	}
	else if ((flag->left > 0 && flag->point < (int)ft_strlen(str))
	|| flag->st == 1)
		p = flag->left - ft_strlen(str) - flag->st;
	else if (flag->left > 0 && flag->hexa == 1)
		p = flag->left - flag->point;
	else if (flag->left > 0)
		p = flag->left - ft_strlen(str);
	while (flag->left > 0 && j < p)
	{
		ft_putstr(tpf.tmp);
		j++;
	}
	*tpf.nb = *tpf.nb + j;
}
