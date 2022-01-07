/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:32:13 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 09:32:45 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_left(t_printf tpf, t_flags *flag, int i)
{
	char	*str;
	int		j;

	j = 0;
	i = i + 1;
	if (!(str = malloc(sizeof(char) * 15)))
		return (0);
	if (str == NULL)
		return (0);
	while (ft_isdigit(tpf.src[i]) != 0)
	{
		str[j] = tpf.src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	flag->left = ft_atoi(str);
	*tpf.tmp = ' ';
	free(str);
	return (i);
}
