/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:36:14 by drevol            #+#    #+#             */
/*   Updated: 2020/04/08 13:36:24 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_less(t_printf tpf, t_flags *flag, int i)
{
	int		j;

	j = i;
	while (tpf.src[i] == '-')
		i++;
	if (j != i)
		i = i - 1;
	i = ft_left(tpf, flag, i);
	return (i);
}

int		ft_parse_star(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	int		e;

	flag->star = 1;
	e = va_arg(ap, int);
	if (tpf.src[i - 1] == '-')
	{
		e = -e;
		if (e < 0)
			flag->left = -e;
		else if (e > 0)
			flag->left = e;
	}
	else
	{
		if (e > 0)
			flag->right = e;
		else if (e < 0)
			flag->left = -e;
	}
	if (tpf.src[i - 1] == '0')
		*tpf.tmp = '0';
	else
		*tpf.tmp = ' ';
	i = i + 1;
	return (i);
}

int		ft_parse_select(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	if (tpf.src[i] == '%')
		i = i + 1;
	if (tpf.src[i] == '0')
		i = ft_zero(ap, tpf, flag, i);
	if (ft_isdigit(tpf.src[i]) != 0)
		i = ft_right(tpf, flag, i);
	if (tpf.src[i] == '-')
		i = ft_less(tpf, flag, i);
	if (tpf.src[i] == '.')
	{
		flag->pt = 1;
		i = ft_point(ap, tpf, flag, i);
	}
	if (tpf.src[i] == '*')
		i = ft_parse_star(ap, tpf, flag, i);
	return (i);
}

int		ft_parse_percent(t_printf tpf, int i)
{
	int		k;

	k = 0;
	while (k < 2 && tpf.src[i - 1])
	{
		tpf.str[k] = tpf.src[i - 1];
		i++;
		k++;
	}
	i = i - 2;
	*tpf.nb = *tpf.nb + 1;
	return (i);
}

int		ft_parse(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	while ((ft_isalpha(tpf.src[i]) == 0 && (tpf.src[i + 1] == '0'
	|| ft_isdigit(tpf.src[i + 1]) != 0 || tpf.src[i + 1] == '-'
	|| tpf.src[i + 1] == '.' || tpf.src[i + 1] == '*')) || tpf.src[i] == '0'
	|| ft_isdigit(tpf.src[i]) != 0 || tpf.src[i] == '-' || tpf.src[i] == '.'
	|| tpf.src[i] == '*')
		i = ft_parse_select(ap, tpf, flag, i);
	if (tpf.src[i] == '.' && ft_isalpha(tpf.src[i + 1]) != 0)
	{
		flag->pt_alone = 2;
		i = i + 1;
	}
	if (tpf.src[i - 1] == '%')
		i = ft_parse_percent(tpf, i);
	ft_convert(ap, tpf, flag, i);
	ft_tpfinit(tpf);
	return (i);
}
