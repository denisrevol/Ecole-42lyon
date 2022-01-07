/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 13:34:14 by drevol            #+#    #+#             */
/*   Updated: 2020/04/08 13:34:31 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_convert_u(va_list ap, t_printf tpf, t_flags *flag)
{
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	if (flag->pt == 1 && n == 0 && flag->point == 0
			&& flag->right == 0 && flag->left == 0)
	{
		if (flag->star == 2)
		{
			ft_putnbr(n);
			*tpf.nb = *tpf.nb + 1;
		}
		else
			*tpf.nb = *tpf.nb;
	}
	else
		ft_alignnb(tpf, flag, (long int)n);
}

void	ft_convert_x(va_list ap, t_printf tpf, t_flags *flag)
{
	char			*str;
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	if (flag->pt == 1 && n == 0 && flag->point == 0
			&& flag->right == 0 && flag->left == 0)
	{
		if (flag->star == 2)
		{
			ft_putnbr(n);
			*tpf.nb = *tpf.nb + 1;
		}
	}
	else
	{
		str = ft_itoabase(n, "0123456789abcdef");
		flag->hexa = 1;
		ft_align(tpf, flag, str);
		free(str);
	}
}

void	ft_convert_gx(va_list ap, t_printf tpf, t_flags *flag)
{
	char			*str;
	unsigned int	n;

	n = va_arg(ap, unsigned int);
	if (flag->pt == 1 && n == 0 && flag->point == 0
			&& flag->right == 0 && flag->left == 0)
	{
		if (flag->star == 2)
		{
			ft_putnbr(n);
			*tpf.nb = *tpf.nb + 1;
		}
		else
			*tpf.nb = *tpf.nb;
	}
	else
	{
		str = ft_itoabase(n, "0123456789ABCDEF");
		flag->hexa = 1;
		ft_align(tpf, flag, str);
		free(str);
	}
}

void	ft_convert_pc(t_printf tpf, t_flags *flag, int i)
{
	char			*str;

	flag->point = 0;
	str = malloc(sizeof(char) * 1000);
	*str = tpf.src[i];
	if (tpf.src[i - 1] == '%')
	{
		*tpf.tmp = ' ';
		if (flag->right > 0)
			flag->right = flag->right + 1;
		else if (flag->left > 0)
			flag->left = flag->left + 1;
		*tpf.nb = *tpf.nb - 1;
	}
	ft_align(tpf, flag, str);
	free(str);
}

void	ft_convert_bis(va_list ap, t_printf tpf, t_flags *flag, int i)
{
	if (tpf.src[i] == 'u')
		ft_convert_u(ap, tpf, flag);
	if (tpf.src[i] == 'x')
		ft_convert_x(ap, tpf, flag);
	if (tpf.src[i] == 'X')
		ft_convert_gx(ap, tpf, flag);
	if (tpf.src[i] == '%')
		ft_convert_pc(tpf, flag, i);
}
