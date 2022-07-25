/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:43:21 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 19:26:41 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "const.h"
#include "libft_strings.h"
#include <unistd.h>
#include <stdio.h>

static void	print_padding(size_t size)
{
	size_t	i;

	i = 0;
	while (i++ < size)
		write(1, " ", 1);
}

static void	actual_print(t_machine *state, char *to_print)
{
	size_t	source_size;

	source_size = ft_strlen(to_print);
	if (state->op.length == FALSE || state->op.l_val < source_size)
	{
		write(1, to_print, source_size);
		state->printed += (int)source_size;
		return ;
	}
	else if (state->op.justified_left == TRUE)
	{
		write(1, to_print, source_size);
		print_padding(state->op.l_val - source_size);
	}
	else
	{
		print_padding(state->op.l_val - source_size);
		write(1, to_print, source_size);
	}
	state->printed += (int)state->op.l_val;
}

void	print_str(t_machine *state)
{
	char	*to_print;

	to_print = va_arg(state->v_args, char *);
	if (to_print == NULL)
		to_print = NULLSTR_PLACEHOLDER;
	if (state->op.precision == TRUE)
	{
		if (ft_strncmp(to_print, NULLSTR_PLACEHOLDER, ft_strlen(to_print)) == 0
			&& ft_strncmp(OS, "LINUX", ft_strlen(OS)) == 0)
			if (state->op.p_val < 6)
				return ;
		to_print = ft_substr(to_print, 0, state->op.p_val);
		if (to_print == NULL)
			return ;
		actual_print(state, to_print);
		free(to_print);
	}
	else
		actual_print(state, to_print);
}
