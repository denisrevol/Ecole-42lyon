/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:57:24 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 11:57:33 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(char *base)
{
	int i;

	if (base[0] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
		i++;
	if (i == 1)
		return (0);
	return (i);
}

int		ft_ctrl(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(long long int nbr, char *base)
{
	int len_base;

	if (ft_ctrl(base) == 1)
	{
		len_base = ft_len(base);
		if (len_base == 0)
			return ;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
		else if ((nbr / len_base) < len_base)
		{
			ft_putchar(base[nbr / len_base]);
			ft_putchar(base[nbr % len_base]);
		}
		else if (len_base != 0)
		{
			ft_putnbr_base(nbr / len_base, base);
			ft_putnbr_base(nbr % len_base, base);
		}
	}
}
