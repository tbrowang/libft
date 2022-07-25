/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 04:53:38 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 09:06:45 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include <stdlib.h>

static size_t	ft_nblen(int nb)
{
	size_t	size;

	if (nb < 0)
		size = 1;
	else
		size = 0;
	while (42)
	{
		size++;
		nb /= 10;
		if (!nb)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	nb_len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nb_len = ft_nblen(n);
	result = (char *) malloc(nb_len + 1);
	if (result == NULL)
		return (NULL);
	result[nb_len--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (42)
	{
		result[nb_len--] = '0' + n % 10;
		n /= 10;
		if (!n)
			break ;
	}
	return (result);
}
