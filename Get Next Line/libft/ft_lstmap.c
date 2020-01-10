/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/30 16:34:59 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/10/31 09:52:14 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
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
