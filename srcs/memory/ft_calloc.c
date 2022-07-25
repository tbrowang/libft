/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 00:39:15 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:36:29 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_memory.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*to_alloc;

	to_alloc = malloc(nmemb * size);
	if (to_alloc == NULL)
		return (NULL);
	ft_bzero(to_alloc, nmemb * size);
	return (to_alloc);
}
