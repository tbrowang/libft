/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_default.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:48:52 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:48:53 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "const.h"
#include <unistd.h>

static int	get_state(const char token)
{
	if (token == CONV_CHAR)
		return (STATE_CONVERSION_FLAGS);
	else if (token == '\0')
		return (STATE_END);
	return (STATE_DEFAULT);
}

const char	*state_default(const char *format, t_machine *state)
{
	int	i;

	i = 0;
	while (format[i] && format[i] != CONV_CHAR)
		i++;
	if (i != 0)
	{
		write(1, format, i);
		state->printed += i;
	}
	state->current = get_state(format[i]);
	return (format + i);
}
