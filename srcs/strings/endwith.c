/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   endwith.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:32:13 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 23:46:46 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bool.h"
#include "libft_strings.h"
#include <stdlib.h>
#include <stdio.h>

t_bool	endwith(char *str, char *end)
{
	char	*tmp;

	if (str == NULL || end == NULL)
		return (FALSE);
	tmp = ft_strrchr(str, '\0') - ft_strlen(end);
	if (ft_strncmp(tmp, end, ft_strlen(end)))
		return (FALSE);
	return (TRUE);
}
