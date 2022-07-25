/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:18:25 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/25 02:41:10 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	size_t			i;

	cpy = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (cpy[i] == (unsigned char)c)
			return (cpy + (int)i);
		i++;
	}
	return (NULL);
}
