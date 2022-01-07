#include "libftprintf.h"

void	ft_alignp(t_printf tpf, t_flags *flag, char *str)
{
	int		j;
	char	*strtemp;

	//dprintf(1, "alignp zero = %d  et left = %d  et right = %d  et point = %zu  et star = %d  et pt = %d  et strlen(str) = %zu\n", 
	//flag->zero, flag->left, flag->right,  flag->point, flag->star, flag->pt, ft_strlen(str));
	//dprintf(1, "tpf.nb entree alignp = %d\n", *tpf.nb);
	j = 0;
	strtemp = ft_strjoin("0x", str);
	if ((int)ft_strlen(strtemp) < flag->right)
	{
		if (flag->right > 0 && flag->pt == 1 && *str == '0')
			ft_putchar(*tpf.tmp);
		if (flag->zero == 2)
			ft_putstr(strtemp);
		while (flag->right > 0 && j < (int)(flag->right - ft_strlen(strtemp)))
		{
			ft_putchar(*tpf.tmp);
			j++;
		}
	}
	if (flag->pt == 1 && *str == '0')
	{
		ft_putstr("0x");
		if (flag->right == 0)
			*tpf.nb = *tpf.nb - 1;
	}
	else if (flag->zero != 2)
		ft_putstr(strtemp);
	j = 0;
	if ((int)ft_strlen(strtemp) < flag->left)
	{
		while (flag->left > 0 && j < (int)(flag->left - ft_strlen(strtemp)))
		{
			ft_putchar(*tpf.tmp);
			j++;
		}
	}
	if (flag->left > 0)
	{
		if (flag->left > (int)ft_strlen(strtemp))
			*tpf.nb = *tpf.nb + flag->left;
		else
			*tpf.nb = *tpf.nb + ft_strlen(strtemp);
	}
	else if (flag->right > 0)
	{
		if (flag->right > (int)ft_strlen(strtemp))
			*tpf.nb = *tpf.nb + flag->right;
		else
			*tpf.nb = *tpf.nb + ft_strlen(strtemp);
	}
	else
		*tpf.nb = *tpf.nb + ft_strlen(strtemp);
	free(strtemp);
}
