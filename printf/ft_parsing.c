/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 15:55:59 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 15:56:06 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_percent(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	if (tpf.src[i + 1] == '%')
	{
		ft_putchar(tpf.src[i + 1]);
		i = i + 2;
		*tpf.nb = *tpf.nb + 1;
	}
	else
	{
		if (tpf.src[i + 1] == '0' || ft_isdigit(tpf.src[i + 1]) != 0
	|| tpf.src[i + 1] == '-' || tpf.src[i + 1] == '.' || tpf.src[i + 1] == '*')
			i = ft_parse(ap, tpf, flag, i);
		else
		{
			i = i + 1;
			ft_convert(ap, tpf, flag, i);
		}
		i = i + 1;
	}
	return (i);
}

int		ft_parsing(va_list ap, t_printf tpf, t_flags *flag)
{
	static int		i;
	int				j;

	j = 0;
	while (tpf.src[i] != '\0' && tpf.src[i] != '%')
	{
		ft_putchar(tpf.src[i]);
		i++;
		j++;
	}
	*tpf.nb = *tpf.nb + j;
	if (tpf.src[i] && tpf.src[i] == '%')
	{
		i = ft_percent(ap, tpf, flag, i);
	}
	if (tpf.src[i])
		ft_parsing(ap, tpf, flag);
	if (!tpf.src[i])
	{
		i = 0;
		return (0);
	}
	i = 0;
	return (1);
}
