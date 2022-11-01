/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:13:49 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/10/26 12:50:38 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	b;

	i = 0;
	str = (unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == b)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
