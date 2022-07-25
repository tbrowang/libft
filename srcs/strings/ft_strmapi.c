/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 05:51:38 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:52:37 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_strings.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str_map;
	unsigned int	len;

	if (!s)
		return (NULL);
	len = (unsigned int) ft_strlen(s);
	str_map = (char *) malloc((len + 1) * sizeof(*str_map));
	if (str_map == NULL)
		return (NULL);
	str_map[len] = '\0';
	while (len--)
		str_map[len] = f(len, s[len]);
	return (str_map);
}
