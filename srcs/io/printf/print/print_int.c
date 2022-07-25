/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:42:53 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:24:09 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_convert.h"
#include "libft_strings.h"
#include <stdlib.h>
#include <unistd.h>

static char	*apply_plus_flag(t_machine *state, int raw, char *original)
{
	char	*flagged;

	if (state->op.sign == FALSE || raw < 0)
		return (original);
	flagged = ft_strjoin("+", original);
	if (flagged == NULL)
		return (original);
	free(original);
	return (flagged);
}

static char	*apply_space_flag(t_machine *state, int raw, char *original)
{
	char	*flagged;

	if (state->op.space == FALSE || state->op.sign == TRUE || raw < 0)
		return (original);
	flagged = ft_strjoin(" ", original);
	if (flagged == NULL)
		return (original);
	free(original);
	return (flagged);
}

static char	*apply_flags(t_machine *state, int raw, char *to_print)
{
	to_print = apply_special_cases(state, raw, to_print);
	to_print = apply_precison_flag(state, raw, to_print);
	to_print = apply_plus_flag(state, raw, to_print);
	to_print = apply_space_flag(state, raw, to_print);
	to_print = apply_length_flag(state, to_print);
	return (to_print);
}

void	print_int(t_machine *state)
{
	int		raw;
	char	*to_print;
	size_t	to_print_size;

	raw = va_arg(state->v_args, int);
	to_print = ltoa_base(raw, "0123456789", 10);
	if (to_print == NULL)
		return ;
	to_print = apply_flags(state, raw, to_print);
	to_print_size = ft_strlen(to_print);
	write(1, to_print, to_print_size);
	state->printed += (int)to_print_size;
	free(to_print);
}
