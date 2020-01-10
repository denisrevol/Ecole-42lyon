/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/29 17:06:40 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 09:55:48 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
