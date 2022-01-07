/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:39:24 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 11:39:28 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(char const *s, char c)
{
	int i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int		ft_word(const char *s, char c, int n)
{
	int		j;

	j = 0;
	while (s[n] != c && s[n] != '\0')
	{
		n++;
		j++;
	}
	return (j);
}

static int		ft_return(char const *s, int n, char c)
{
	while (s[n] == c)
		n++;
	return (n);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		j;
	int		count;
	char	**tab;

	i = 0;
	n = 0;
	if (!s)
		return (NULL);
	count = ft_count(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	while (s[n] != '\0' && i < count)
	{
		n = ft_return(s, n, c);
		if (!(tab[i] = (char*)malloc(sizeof(char) * ft_word(s, c, n) + 1)))
			return (NULL);
		j = 0;
		while (s[n] != c && s[n] != '\0')
			tab[i][j++] = s[n++];
		tab[i++][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
