/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/24 15:16:08 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 17:47:24 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		len;
	char	*str;

	start = 0;
	len = 0;
	if (!s)
		return (NULL);
	while (s[len] != '\0')
		len++;
	while (s[start] != '\0'
			&& (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	while (start < len
			&& (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	if (len == start)
		return (ft_strnew(1));
	str = ft_strsub(s, start, len - start);
	return (str);
}
