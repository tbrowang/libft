/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_wrong_flag.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:48:46 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:48:47 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "const.h"
#include "libft_memory.h"
#include <unistd.h>

const char	*state_wrong_flag(const char *format, t_machine *state)
{
	const char	*returned;

	returned = state->op.start;
	ft_bzero(&state->op, sizeof(t_op));
	write(1, "%", 1);
	state->printed += 1;
	state->current = STATE_DEFAULT;
	(void)format;
	return (++returned);
}
