/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:16:57 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 12:17:05 by drevol           ###   ########lyon.fr   */
/*                                                                            */
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
