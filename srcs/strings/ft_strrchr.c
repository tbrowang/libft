/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 01:47:50 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 07:20:16 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (c < 0 && c < 256)
		return ((char *) s);
	while (len > 0)
	{
		if (s[len] == (char) c)
			return ((char *) &s[len]);
		len--;
	}
	if (s[len] == (char) c)
		return ((char *) s);
	return (NULL);
}
