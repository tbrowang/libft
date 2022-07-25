/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:09:52 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/25 02:42:27 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*copy_of_s1;
	unsigned char	*copy_of_s2;

	copy_of_s1 = (unsigned char *)s1;
	copy_of_s2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*copy_of_s1 != *copy_of_s2
			|| (*copy_of_s1 == '\0' || *copy_of_s2 == '\0'))
			return (*copy_of_s1 - *copy_of_s2);
		copy_of_s1++;
		copy_of_s2++;
		n--;
	}
	return (0);
}
