/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 03:35:13 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:51:03 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_of_s1;
	size_t	len_of_s2;

	if (!s1 || !s2)
		return (NULL);
	len_of_s1 = ft_strlen(s1);
	len_of_s2 = ft_strlen(s2);
	str = (char *) malloc((len_of_s1 + len_of_s2 + 1) * sizeof(*str));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len_of_s1 + 1);
	ft_strlcat(str, s2, len_of_s1 + len_of_s2 + 1);
	return (str);
}
