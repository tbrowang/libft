/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:35:49 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:35:50 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "const.h"

void	init_state(t_machine *state)
{
	state->current = STATE_DEFAULT;
	state->printed = 0;
	state->callback[STATE_DEFAULT] = state_default;
	state->callback[STATE_CONVERSION_FLAGS] = state_conversion_flags;
	state->callback[STATE_CONVERSION_LENGTH] = state_conversion_length;
	state->callback[STATE_CONVERSION_PRECISION] = state_conversion_precision;
	state->callback[STATE_CONVERSION_PRINT] = state_conversion_print;
	state->callback[STATE_WRONG_FLAG] = state_wrong_flag;
}
