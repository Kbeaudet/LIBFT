/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:07:48 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/10/26 12:43:15 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	const char	*pt_src;

	pt_src = src;
	i = 0;
	while (i < dstsize && *dst)
	{
		dst++;
		i++;
	}
	if (i == dstsize)
		return (i + ft_strlen(src));
	j = 0;
	while (pt_src[j])
	{
		if (j < dstsize - i - 1)
			*dst++ = pt_src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
