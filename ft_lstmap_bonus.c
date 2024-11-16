/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:00:22 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/16 19:40:24 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*list;

	if (!lst || !f || !del)
		return (NULL);
	list = ft_lstnew(f(lst -> content));
	if (!list)
		return (NULL);
	lst = lst -> next;
	while (lst)
	{
		new_element = ft_lstnew(f(lst -> content));
		if (!new_element)
			ft_lstclear(&list, del);
		ft_lstadd_back(&list, new_element);
		lst = lst -> next;
	}
	return (list);
}
