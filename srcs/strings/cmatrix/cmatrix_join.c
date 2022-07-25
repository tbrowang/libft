/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmatrix_join.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:00:50 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 23:27:59 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include "libft_memory.h"
#include <stdlib.h>

char	**fill_cmatrix(char **to_fill, char **cmatrix1, char **cmatrix2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (cmatrix1 && cmatrix1[i])
	{
		to_fill[j] = ft_strdup(cmatrix1[i]);
		if (to_fill[j] == NULL)
			return (cmatrix_free(to_fill), NULL);
		++j;
		++i;
	}
	i = 0;
	while (cmatrix2 && cmatrix2[i])
	{
		to_fill[j] = ft_strdup(cmatrix2[i]);
		if (to_fill[j] == NULL)
			return (cmatrix_free(to_fill), NULL);
		++j;
		++i;
	}
	return (to_fill);
}

char	**cmatrix_join(char **cmatrix1, char **cmatrix2)
{
	char	**join_cmatrix;
	int		size;

	if (cmatrix1 == NULL)
		return (cmatrix2);
	if (cmatrix2 == NULL)
		return (cmatrix1);
	size = cmatrix_size(cmatrix1) + cmatrix_size(cmatrix2) + 1;
	join_cmatrix = ft_calloc(size, sizeof(char *));
	if (join_cmatrix == NULL)
		return (NULL);
	return (fill_cmatrix(join_cmatrix, cmatrix1, cmatrix2));
}
