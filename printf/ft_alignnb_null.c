/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alignnb_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 10:17:10 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 10:18:09 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_alignnb_null(t_printf tpf, t_flags *flag)
{
	if (flag->right > 0)
	{
		ft_putstr(" ");
		*tpf.nb = *tpf.nb + 1;
	}
	else
		ft_putstr("");
}
