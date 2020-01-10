/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memalloc.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 08:24:43 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/28 10:10:25 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*tab;
	size_t			i;

	i = 0;
	tab = (void *)malloc(size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = '\0';
		i++;
	}
	return (tab);
}
