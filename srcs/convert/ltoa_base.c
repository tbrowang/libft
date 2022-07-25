/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ltoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:22:24 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 22:57:13 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_strings.h"
#include "libft_memory.h"
#include "libft_convert.h"

char	*ltoa_base(long num, char *base, unsigned int base_size)
{
	char	*answer;
	char	*positive;
	size_t	positive_size;

	if (num >= 0)
		return (utoa_base(num, base, base_size));
	positive = utoa_base(num * -1, base, base_size);
	positive_size = ft_strlen(positive);
	answer = ft_calloc(1, positive_size + 2);
	ft_strlcat(answer, "-", 2);
	ft_strlcat(answer, positive, positive_size + 2);
	free(positive);
	return (answer);
}
