/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:14:03 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 11:14:18 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_result(int j, int n, int tmp)
{
	if (j < 18)
		return (tmp * n);
	else if (n == -1)
		return (0);
	return (-1);
}

static int	ft_test(int i, const char *str)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '0')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	int i;
	int tmp;
	int n;
	int j;

	i = 0;
	tmp = 0;
	n = 1;
	j = 0;
	i = ft_test(i, str);
	if (str[i] == '-')
		n = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' || str[i] <= 9)
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			tmp = tmp * 10 + (str[i] - '0');
			i++;
			j++;
		}
	}
	return (ft_result(j, n, tmp));
}
