/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:42:22 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:42:25 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static void	print_padding(size_t size)
{
	size_t	i;

	i = 0;
	while (i++ < size)
		write(1, " ", 1);
}

void	print_char(t_machine *state)
{
	int				raw;
	unsigned char	to_print;

	raw = va_arg(state->v_args, int);
	to_print = (unsigned int)raw;
	if (state->op.length == FALSE || state->op.l_val < 2)
	{
		write(1, &to_print, 1);
		state->printed += 1;
		return ;
	}
	else if (state->op.justified_left == TRUE)
	{
		write(1, &to_print, 1);
		print_padding(state->op.l_val - 1);
	}
	else
	{
		print_padding(state->op.l_val - 1);
		write(1, &to_print, 1);
	}
	state->printed += (int)state->op.l_val;
}
