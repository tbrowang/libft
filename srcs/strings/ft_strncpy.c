/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 23:25:09 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/22 23:25:40 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include "libft_memory.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = ft_strlen(src);
	ft_memcpy(dst, src, len);
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
