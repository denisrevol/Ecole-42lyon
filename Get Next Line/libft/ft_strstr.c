/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/16 09:25:23 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/21 11:08:09 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
