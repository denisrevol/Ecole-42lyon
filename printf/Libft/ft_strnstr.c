/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:37:27 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 11:37:35 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t				i;
	unsigned long int	j;
	size_t				n;

	i = 0;
	j = 0;
	n = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		i = n;
		j = 0;
		while (s1[i] == s2[j] && i < len)
		{
			if (j == (ft_strlen(s2) - 1))
				return ((char *)(&s1[i - j]));
			j++;
			i++;
		}
		n++;
	}
	return (0);
}
