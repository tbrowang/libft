/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmatrix_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:53:56 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 23:24:10 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	cmatrix_free(char **cmatrix)
{
	int		i;

	i = 0;
	while (cmatrix[i])
		free(cmatrix[i++]);
	free(cmatrix);
}
