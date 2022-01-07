/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:50:46 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 10:50:52 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_alignp_right(t_printf tpf, t_flags *flag, char *str, char *strtemp)
{
	int		j;

	j = 0;
	if (flag->right > 0 && flag->pt == 1 && *str == '0')
	{
		ft_putchar(*tpf.tmp);
		*tpf.nb = *tpf.nb + 1;
	}
	if (flag->zero == 2)
	{
		ft_putstr(strtemp);
		*tpf.nb = *tpf.nb + ft_strlen(strtemp);
	}
	while (flag->right > 0 && j < (int)(flag->right - ft_strlen(strtemp)))
	{
		ft_putchar(*tpf.tmp);
		j++;
	}
	*tpf.nb = *tpf.nb + j;
}

void	ft_alignp_left(t_printf tpf, t_flags *flag, char *strtemp)
{
	int		j;

	j = 0;
	while (flag->left > 0 && j < (int)(flag->left - ft_strlen(strtemp)))
	{
		ft_putchar(*tpf.tmp);
		j++;
	}
	*tpf.nb = *tpf.nb + j;
}

void	ft_alignp(t_printf tpf, t_flags *flag, char *str)
{
	int		j;
	char	*strtemp;

	j = 0;
	strtemp = ft_strjoin("0x", str);
	if ((int)ft_strlen(strtemp) < flag->right)
		ft_alignp_right(tpf, flag, str, strtemp);
	if (flag->pt == 1 && *str == '0')
	{
		ft_putstr("0x");
		*tpf.nb = *tpf.nb + 2;
	}
	else if (flag->zero != 2)
	{
		ft_putstr(strtemp);
		*tpf.nb = *tpf.nb + ft_strlen(strtemp);
	}
	if ((int)ft_strlen(strtemp) < flag->left)
		ft_alignp_left(tpf, flag, strtemp);
}
