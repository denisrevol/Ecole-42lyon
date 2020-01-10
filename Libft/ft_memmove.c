/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 15:50:16 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:26:47 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*psrc;
	char	*pdst;
	size_t	i;

	i = -1;
	if (dst == '\0' && src == '\0')
		return (0);
	psrc = (char *)src;
	pdst = (char *)dst;
	if (psrc < pdst)
		while ((int)(--len) >= 0)
			*(pdst + len) = *(psrc + len);
	else
		while (++i < len)
			*(pdst + i) = *(psrc + i);
	return (dst);
}
