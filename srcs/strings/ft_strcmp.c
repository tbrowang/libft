/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:54:51 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/12 19:54:51 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft_strings.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	if (l1 < l2)
		return (ft_strncmp(s1, s2, l2 + 1));
	else
		return (ft_strncmp(s1, s2, l1 + 1));
}
