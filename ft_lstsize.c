/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:15:20 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/11/01 14:56:43 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*new;

	i = 0;
	if (lst == NULL)
		return (i);
	new = lst;
	while (new != NULL)
	{
		new = new->next;
		i++;
	}
	return (i);
}
