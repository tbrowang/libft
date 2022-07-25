/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:37:28 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/25 02:38:21 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy_of_s1;
	unsigned char	*copy_of_s2;

	copy_of_s1 = (unsigned char *)s1;
	copy_of_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*copy_of_s1 != *copy_of_s2)
			return (*copy_of_s1 - *copy_of_s2);
		copy_of_s1++;
		copy_of_s2++;
		n--;
	}
	return (0);
}
