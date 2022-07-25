/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:48:29 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:48:37 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_strings.h"
#include "const.h"

static void	dispatch(t_machine *state)
{
	void	(*callback[9])(t_machine *state);
	t_op	*op;

	op = &state->op;
	callback[0] = print_char;
	callback[1] = print_str;
	callback[2] = print_ptr;
	callback[3] = print_int;
	callback[4] = print_int;
	callback[5] = print_u_int;
	callback[6] = print_hex_low;
	callback[7] = print_hex_up;
	callback[8] = print_percent;
	callback[ft_strchr(CONV_TYPE, op->type) - CONV_TYPE](state);
}

const char	*state_conversion_print(const char *format, t_machine *state)
{
	state->current = STATE_DEFAULT;
	if (ft_strchr(CONV_TYPE, *format) == NULL)
	{
		state->current = STATE_WRONG_FLAG;
		return (format);
	}
	state->op.type = *format;
	dispatch(state);
	return (++format);
}
