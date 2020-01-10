/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 10:13:14 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 12:51:23 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int range;
	int *tab;

	range = max - min;
	if (range <= 0)
	{
		tab = NULL;
		return (tab);
	}
	else
	{
		tab = (int*)malloc(sizeof(int) * range);
		i = 0;
		while (i < range)
		{
			tab[i] = min + i;
			i++;
		}
		return (tab);
	}
}
