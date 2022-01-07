/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_align.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 19:03:59 by drevol            #+#    #+#             */
/*   Updated: 2020/04/09 19:13:30 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_align_if(t_printf tpf, t_flags *flag, char *str, int p)
{
	if ((flag->right > 0 && ft_strlen(str) != 0 && flag->point == 0
				&& str != NULL) || (flag->point > (int)ft_strlen(str)
				&& flag->hexa != 1)
			|| (flag->point < (int)ft_strlen(str) && flag->hexa == 1))
		p = flag->right - ft_strlen(str);
	else if ((flag->right > 0 && flag->point < (int)ft_strlen(str)
				&& str != NULL) || (flag->point >= (int)ft_strlen(str)
				&& str != NULL && flag->hexa == 1 && flag->pt_alone != 2))
		p = flag->right - flag->point;
	else if (flag->right > 0 && str == NULL)
	{
		if (flag->point < 6 && flag->point != 0)
			p = flag->right - flag->point;
		else
			p = flag->right - 6;
	}
	else if (flag->right > 0 && flag->pt_alone == 2)
		p = flag->right;
	else if (flag->right > 0 && flag->point == 0)
		p = flag->right;
	if (flag->pt == 1 && flag->hexa == 1
			&& flag->point < flag->right && flag->point != 0)
		*tpf.tmp = ' ';
	return (p);
}

char	*ft_align_first(t_printf tpf, t_flags *flag, char *str)
{
	int			k;
	char		*strtemp;

	k = 0;
	if (flag->pt == 1 && flag->point > 0)
	{
		if (flag->hexa == 1 && flag->point > 0)
		{
			while ((k < (int)(flag->point - ft_strlen(str))))
			{
				ft_putchar('0');
				k++;
			}
			*tpf.nb = *tpf.nb + k;
		}
		else
		{
			strtemp = ft_strsub(str, 0, flag->point);
			str = strtemp;
			free(strtemp);
		}
	}
	return (str);
}

void	ft_align_st(t_printf tpf, t_flags *flag, char *str)
{
	if (flag->st == 1)
	{
		if (ft_strcmp(str, "(null)") == 0 && (flag->right > 6
			|| flag->left > 6))
		{
			ft_putstr("     ");
			*tpf.nb = *tpf.nb + 6;
		}
		else if (ft_strcmp(str, "(null)") == 0 && (flag->right > 0
			|| flag->left > 0))
		{
			ft_putstr("    ");
			*tpf.nb = *tpf.nb + 5;
		}
		else
		{
			ft_putchar(0);
			*tpf.nb = *tpf.nb + 1;
		}
	}
	else
	{
		ft_putstr(str);
		*tpf.nb = *tpf.nb + ft_strlen(str);
	}
}

void	ft_align_right(t_printf tpf, t_flags *flag, int p)
{
	int						j;

	j = 0;
	while (flag->right > 0 && j < p)
	{
		ft_putchar(*tpf.tmp);
		j++;
	}
	*tpf.nb = *tpf.nb + j;
}

void	ft_align(t_printf tpf, t_flags *flag, char *str)
{
	int						k;
	char					*null;
	int						p;

	k = 0;
	p = 0;
	null = "(null)";
	if (str == NULL)
		str = null;
	p = ft_align_if(tpf, flag, str, p);
	ft_align_right(tpf, flag, p);
	str = ft_align_first(tpf, flag, str);
	if (flag->right == 0 && flag->left == 0 && flag->pt != 1 && str == NULL)
	{
		ft_putstr(null);
		*tpf.nb = *tpf.nb + 6;
	}
	else
	{
		if ((*str == '0' && flag->point == 0 && flag->zero == 1)
				|| (*str == '0' && flag->pt_alone == 2))
			*str = ' ';
		ft_align_st(tpf, flag, str);
	}
	ft_align_left(tpf, flag, str, p);
}
