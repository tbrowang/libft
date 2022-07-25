/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:13:05 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:13:21 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*fill_str(char *str, char to_fill, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		*str = to_fill;
		i++;
		str++;
	}
	return (str);
}