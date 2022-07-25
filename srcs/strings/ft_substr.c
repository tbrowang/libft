/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 03:02:34 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:50:34 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	size = 0;
	if (!(start >= (unsigned int)ft_strlen(s)))
	{
		while (s[start + size] && size < len)
			size++;
	}
	substring = (char *) malloc((size + 1) * sizeof(*substring));
	if (substring == NULL)
		return (NULL);
	while (i < size)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
