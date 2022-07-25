/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 02:48:38 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:48:48 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include "libft_memory.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char		*dup;
	size_t		len;

	len = ft_strlen(s);
	dup = (char *) malloc((len + 1) * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, s, len + 1);
	return (dup);
}
