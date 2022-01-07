/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flaginit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 09:29:10 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 09:30:43 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_flaginit(t_flags *flag)
{
	flag->right = 0;
	flag->left = 0;
	flag->point = 0;
	flag->pt = 0;
	flag->hexa = 0;
	flag->zero = 0;
	flag->star = 0;
	flag->neg = 0;
	flag->st = 0;
	flag->pt_alone = 0;
}
