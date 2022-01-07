/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:12:39 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 12:12:42 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memcpyh(void *dest, void const *src, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	unsigned const char	*psrc;

	i = 0;
	pdest = dest;
	psrc = src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	if (!content)
	{
		(*ptr).content = NULL;
		(*ptr).content_size = 0;
	}
	else
	{
		(*ptr).content = malloc(content_size);
		if (!(*ptr).content)
			return (NULL);
		(*ptr).content_size = content_size;
		ft_memcpyh((*ptr).content, content, content_size);
	}
	(*ptr).next = NULL;
	return (ptr);
}
