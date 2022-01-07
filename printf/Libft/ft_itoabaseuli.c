/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabaseuli.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:37:31 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 12:39:33 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int		ft_len(char *base)
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

static int		ft_length(unsigned long int n, int len_base)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / len_base;
		len++;
	}
	return (len);
}

char			*ft_itoabaseuli(unsigned long int nb, char *base)
{
	char		*str;
	int			i;
	int			len_base;

	len_base = ft_len(base);
	if (len_base == 0)
		return (NULL);
	i = ft_length(nb, len_base);
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	while (i >= 0)
	{
		str[i--] = base[nb % len_base];
		nb = nb / len_base;
	}
	return (str);
}
