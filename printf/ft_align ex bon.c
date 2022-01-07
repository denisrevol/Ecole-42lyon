/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_align.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <drevol@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 16:05:00 by drevol            #+#    #+#             */
/*   Updated: 2020/03/12 11:10:52 by drevol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_align(t_printf tpf, t_flags *flag, char *str)
{
	unsigned long int		j;
	char					*strtemp;
	int						k;
	char					*null;
	int						p;

	j = 0;
	k = 0;
	p = 0;
	null = "(null)";
	strtemp = NULL;
	//dprintf(1, "zero = %d  et left = %d  et right = %d  et strlen = %zu  et point = %zu  et star = %d  et pt = %d et hexa = %d  et st = %d et str = %s  et pt_alone = %d et tpf.tmp = %c\n",
	//flag->zero, flag->left, flag->right, ft_strlen(str), flag->point, flag->star, flag->pt, flag->hexa, flag->st,  str, flag->pt_alone, *tpf.tmp);
	if (str == NULL)
		str = null;
	if ((flag->zero == 1 && *str != '%') || (flag->point != 0
	&& flag->point < (int)ft_strlen(str)))
		*tpf.tmp = ' ';
	if ((flag->right > 0 && ft_strlen(str) != 0 && flag->point == 0
	&& str != null) || (flag->point > (int)ft_strlen(str) && flag->hexa != 1)
			|| (flag->point < (int)ft_strlen(str) && flag->hexa == 1))
		p = flag->right - ft_strlen(str);
	else if ((flag->right > 0 && flag->point < (int)ft_strlen(str)
	&& str != null) || (flag->point >= (int)ft_strlen(str) && str != null
	&& flag->hexa == 1 && flag->pt_alone != 2))
		p = flag->right - flag->point;
	else if (flag->right > 0 && str == null)
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
	while (flag->right > 0 && (int)j < p)
	{
		ft_putchar(*tpf.tmp);
		j++;
	}
	if (flag->pt == 1 && flag->point > 0)
	{
		if (flag->hexa == 1 && flag->point > 0)
		{
			while ((k < (int)(flag->point - ft_strlen(str))))
			{
				ft_putchar('0');
				k++;
			}
		}
		else
		{
			strtemp = ft_strsub(str, 0, flag->point);
			str = strtemp;
			free(strtemp);
		}
	}
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
		if (flag->st == 1)
		{
			if (str == null && (flag->right > 6 || flag->left > 6))
				ft_putstr("     ");
			else if (str == null && (flag->right > 0 || flag->left > 0))
				ft_putstr("    ");
			else
				ft_putchar(0);
		}
		else
			ft_putstr(str);
	}
	j = 0;
	p = 0;
	if (flag->left > 0 && str == null && flag->point >= 6)
		p = 6;
	else if (flag->left > 0 && str == null && flag->point < 6)
	{
		if (flag->point == 0)
		{
			p = flag->left - flag->point - 6;
		}
		else
			p = flag->left - flag->point;
	}
	else if ((flag->left > 0 && flag->point < (int)ft_strlen(str)) || flag->st == 1)
		p = flag->left - ft_strlen(str) - flag->st;
	else if (flag->left > 0 && flag->hexa == 1)
		p = flag->left - flag->point;
	else if (flag->left > 0)
		p = flag->left - ft_strlen(str);
	while (flag->left > 0 && (int)j < p)
	{
		ft_putstr(tpf.tmp);
		j++;
	}
	if (flag->left > 0)
	{
		if ((flag->left > (int)ft_strlen(str))
	|| (str == null && flag->left > 0 && flag->st == 1))
			*tpf.nb = *tpf.nb + flag->left;
		else
			*tpf.nb = *tpf.nb + ft_strlen(str);
	}
	else if (flag->right > 0)
	{
		if (flag->right > (int)ft_strlen(str))
		{
			if (flag->point > flag->right)
				*tpf.nb = *tpf.nb + flag->point;
			else
				*tpf.nb = *tpf.nb + flag->right;
		}
		else
		{
			if (flag->point > flag->right)
			{
				if (flag->point < (int)ft_strlen(str))
					*tpf.nb = *tpf.nb + flag->point;
				else
				{
					if (k > 0)
						*tpf.nb = *tpf.nb + flag->point;
					else
						*tpf.nb = *tpf.nb + ft_strlen(str);
				}
			}
			else
				*tpf.nb = *tpf.nb + ft_strlen(str);
		}
	}
	else
	{
		if (flag->st == 1)
			*tpf.nb = *tpf.nb + 1;
		else
		{
			if (flag->point != 0 && flag->point < (int)ft_strlen(str))
			{
				if (flag->hexa == 1)
					*tpf.nb = *tpf.nb + ft_strlen(str);
				else
					*tpf.nb = *tpf.nb + flag->point;
			}
			else if (flag->hexa == 1 && flag->point > 0)
				*tpf.nb = *tpf.nb + flag->point;
			else
				*tpf.nb = *tpf.nb + ft_strlen(str);
		}
	}
}
