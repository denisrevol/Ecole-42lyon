/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 17:22:15 by drevol            #+#    #+#             */
/*   Updated: 2020/04/10 17:22:36 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_zero_star(va_list ap, t_flags *flag, int i)
{
	int		nb;

	nb = va_arg(ap, int);
	if (nb > 0)
		flag->right = nb;
	else
		flag->left = -nb;
	i = i + 1;
	return (i);
}

void	ft_test(t_printf tpf, t_flags *flag)
{
	if (flag->right > 0)
		*tpf.tmp = '0';
	else
		*tpf.tmp = ' ';
}

int		ft_zero(va_list ap, t_printf tpf, t_flags *flag, int i)
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
	if (tpf.src[i] == '*')
		i = ft_zero_star(ap, flag, i);
	else
		flag->right = ft_atoi(str);
	ft_test(tpf, flag);
	flag->zero = 2;
	free(str);
	return (i);
}
