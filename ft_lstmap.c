/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:14:08 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/11/01 15:30:40 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newelem;

	if (lst == NULL || f == NULL)
		return (NULL);
	newelem = 0;
	while (lst)
	{
	newlist = ft_lstnew((*f)(lst->content));
		if (!newlist)
		{
			ft_lstclear(&newelem, del);
			return (NULL);
		}
		ft_lstadd_back(&newelem, newlist);
	lst = lst->next;
	}
	return (newelem);
}
