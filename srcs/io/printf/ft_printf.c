/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:35:40 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:35:43 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "const.h"
#include <stdarg.h>
#include <stddef.h>

int	ft_printf(const char *format, ...)
{
	t_machine		state;

	if (!format)
		return (-1);
	init_state(&state);
	va_start(state.v_args, format);
	while (state.current != STATE_END)
		format = state.callback[state.current](format, &state);
	va_end(state.v_args);
	return (state.printed);
}
