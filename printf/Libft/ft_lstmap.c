/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drevol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:17:33 by drevol            #+#    #+#             */
/*   Updated: 2020/04/20 12:17:52 by drevol           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;

	new = NULL;
	if (!lst)
		return (NULL);
	if (lst && f)
	{
		new = malloc(sizeof(t_list));
		new = f(lst);
		new->next = ft_lstmap(lst->next, f);
	}
	return (new);
}
