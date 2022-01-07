/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_right.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:05:34 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 10:07:11 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_right(t_printf tpf, t_flags *flag, int i)
{
	char	*str;
	int		j;

	str = malloc(sizeof(char) * 15);
	if (str == NULL)
		return (0);
	j = 0;
	while (ft_isdigit(tpf.src[i]) != 0)
	{
		str[j] = tpf.src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	flag->right = ft_atoi(str);
	*tpf.tmp = ' ';
	free(str);
	return (i);
}
