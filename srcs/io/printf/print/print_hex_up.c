/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:42:41 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:24:46 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_convert.h"
#include "libft_strings.h"
#include <stdlib.h>
#include <unistd.h>

static char	*apply_flags(t_machine *state, unsigned int raw, char *to_print)
{
	to_print = apply_special_cases(state, (int)raw, to_print);
	to_print = apply_precison_flag(state, 1, to_print);
	to_print = apply_sharp_flag(state, to_print, "0X");
	to_print = apply_length_flag(state, to_print);
	return (to_print);
}

void	print_hex_up(t_machine *state)
{
	unsigned int	raw;
	char			*to_print;
	size_t			to_print_size;

	raw = va_arg(state->v_args, unsigned int);
	to_print = utoa_base(raw, "0123456789ABCDEF", 16);
	if (to_print == NULL)
		return ;
	to_print = apply_flags(state, raw, to_print);
	to_print_size = ft_strlen(to_print);
	write(1, to_print, to_print_size);
	state->printed += (int)to_print_size;
	free(to_print);
}
