/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeaudet <karo.belly90@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:59:37 by kbeaudet          #+#    #+#             */
/*   Updated: 2022/10/28 14:30:09 by kbeaudet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_array(char *a, unsigned int number, long int len)
{
	while (number > 0)
	{
		a[len--] = 48 + (number % 10);
		number = number / 10;
	}
	return (a);
}

static long int	ft_len(int n)
{
	int					len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char				*a;
	long int			len;
	unsigned int		number;
	int					sign;

	sign = 1;
	len = ft_len(n);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!(a))
		return (NULL);
	a[len--] = '\0';
	if (n == 0)
		a[0] = '0';
	if (n < 0)
	{
		sign *= -1;
		number = n * -1;
		a[0] = '-';
	}
	else
		number = n;
	a = ft_array(a, number, len);
	return (a);
}
