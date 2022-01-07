/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:39:56 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 11:39:59 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int					i;
	unsigned long int	j;
	int					n;

	i = 0;
	j = 0;
	n = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		i = n;
		j = 0;
		while (s1[i] == s2[j])
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
