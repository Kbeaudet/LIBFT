/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:31:37 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/10/28 14:54:51 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t		debut;
	size_t		fin;
	char		*res;
	int			i;

	debut = 0;
	if (!s1)
		return (NULL);
	if (!s2)
		return (ft_strdup(s1));
	while (s1[debut] != '\0' && ft_strchr(s2, s1[debut]))
		debut++;
		fin = ft_strlen(s1);
	while (fin > debut && ft_strchr(s2, s1[fin - 1]))
	{
		fin--;
	}
	res = (char *)malloc(sizeof(char) * (fin - debut + 1));
	if (!res)
		return (NULL);
		i = 0;
	while (debut < fin)
		res[i++] = s1[debut++];
		res[i] = '\0';
	return (res);
}
