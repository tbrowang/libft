/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   state_precision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:49:01 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:49:02 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_ctype.h"
#include "libft_convert.h"
#include "const.h"

const char	*state_conversion_precision(const char *format, t_machine *state)
{
	state->current = STATE_CONVERSION_PRINT;
	if (*format != '.')
		return (format);
	state->op.precision = TRUE;
	state->op.zero_padded = FALSE;
	++format;
	if (!ft_isdigit(*format) && *format != '\0')
		return (format);
	else if (*format == '\0')
	{
		state->current = STATE_WRONG_FLAG;
		return (format);
	}
	state->op.p_val = ft_atoi(format);
	while (ft_isdigit(*format))
		format++;
	return (format);
}
