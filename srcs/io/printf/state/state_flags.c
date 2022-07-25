/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:49:07 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:49:08 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_strings.h"
#include "libft_memory.h"
#include "const.h"

const char	*state_conversion_flags(const char *format, t_machine *state)
{
	ft_bzero(&state->op, sizeof(t_op));
	state->op.start = format++;
	while (*format && ft_strchr(FLAGS, *format) != NULL)
	{
		if (*format == ' ')
			state->op.space = TRUE;
		else if (*format == '+')
			state->op.sign = TRUE;
		else if (*format == '-')
			state->op.justified_left = TRUE;
		else if (*format == '0')
			state->op.zero_padded = TRUE;
		else if (*format == '#')
			state->op.alternate = TRUE;
		format++;
	}
	state->current = STATE_CONVERSION_LENGTH;
	if (*format == '\0')
		state->current = STATE_WRONG_FLAG;
	return (format);
}
