/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmatrix_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:58:32 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 23:25:30 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	cmatrix_size(char **cmatrix)
{
	int		i;

	i = 0;
	if (cmatrix == NULL)
		return (0);
	while (cmatrix[i])
		i++;
	return (i);
}
