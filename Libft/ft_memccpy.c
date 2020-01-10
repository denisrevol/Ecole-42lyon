/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 13:55:26 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 15:49:55 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	unsigned const char	*psrc;

	i = 0;
	pdest = (unsigned char*)dest;
	psrc = (unsigned char*)src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (pdest[i] == (unsigned char)(c))
			return (dest + i + 1);
		i++;
	}
	return (0);
}
