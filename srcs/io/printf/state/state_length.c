/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:49:13 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:49:14 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_convert.h"
#include "libft_ctype.h"
#include "const.h"

const char	*state_conversion_length(const char *format, t_machine *state)
{
	state->current = STATE_CONVERSION_PRECISION;
	if (!ft_isdigit(*format))
		return (format);
	state->op.length = TRUE;
	state->op.l_val = ft_atoi(format);
	while (ft_isdigit(*format))
		format++;
	if (*format == '\0')
		state->current = STATE_WRONG_FLAG;
	return (format);
}
