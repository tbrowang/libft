/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:40:46 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/25 02:42:58 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	char			*next_big;
	char			*next_lit;

	if (!*little)
		return ((char *)big);
	while (len-- && *big)
	{
		if (*big == *little)
		{
			i = len;
			next_big = (char *)big + 1;
			next_lit = (char *)little + 1;
			while (i-- && *next_big && *next_lit && *next_big == *next_lit)
			{
				next_big++;
				next_lit++;
			}
			if (!*next_lit)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
