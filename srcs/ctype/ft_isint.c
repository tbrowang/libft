/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:51:43 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/12 18:51:43 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bool.h"
#include "libft_convert.h"
#include "libft_strings.h"
#include "libft_ctype.h"
#include "libft_io.h"
#include <stdlib.h>

int	ft_isint(char *nbr)
{
	int		i;
	int		has_sign;
	t_bool	is_int;
	char	*tmp;

	i = 0;
	has_sign = 0;
	while (ft_isspace(nbr[i]))
		i++;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		has_sign = 1;
		i++;
	}
	tmp = ft_itoa(ft_atoi(nbr));
	if (!tmp)
		return (0);
	if (ft_strcmp(nbr + i - has_sign, tmp))
		is_int = FALSE;
	else
		is_int = TRUE;
	free(tmp);
	return (is_int);
}
