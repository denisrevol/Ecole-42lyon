/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 17:27:11 by drevol            #+#    #+#             */
/*   Updated: 2020/04/10 17:27:26 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_point_star(va_list ap, t_flags *flag, int i)
{
	int		nb;

	flag->star = 2;
	nb = va_arg(ap, int);
	if (nb > 0)
		flag->point = nb;
	else if (nb < 0)
		flag->point = 0;
	else
		flag->zero = 1;
	i = i + 1;
	return (i);
}

int		ft_point(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	char	*str;
	int		j;

	i = i + 1;
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
	if ((j == 1 && (*str == '0')))
		flag->zero = 1;
	if (tpf.src[i] == '*')
		i = ft_point_star(ap, flag, i);
	else if (ft_isalpha(tpf.src[i]) != 0 && tpf.src[i - 1] == '.')
		flag->pt_alone = 2;
	else
		flag->point = flag->point + ft_atoi(str);
	free(str);
	return (i);
}
