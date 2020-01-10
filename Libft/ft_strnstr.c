/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 11:30:45 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 11:05:10 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
