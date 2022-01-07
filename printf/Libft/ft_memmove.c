/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:08:15 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 12:08:25 by drevol           ###   ########lyon.fr   */
/*                                                                            */
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
