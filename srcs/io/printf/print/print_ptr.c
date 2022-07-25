/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:43:15 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:21:22 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "const.h"
#include "libft_strings.h"
#include "libft_convert.h"
#include <stdlib.h>
#include <unistd.h>

static char	*get_str(unsigned long raw)
{
	char	*hex;
	char	*ptr_str;

	if (raw == 0)
		return (ft_strdup(NULL_PLACEHOLDER));
	hex = utoa_base(raw, "0123456789abcdef", 16);
	if (hex == NULL)
		return (NULL);
	ptr_str = ft_strjoin("0x", hex);
	free(hex);
	if (ptr_str == NULL)
		return (NULL);
	return (ptr_str);
}

static char	*apply_flags(t_machine *state, char *to_print)
{
	to_print = apply_length_flag(state, to_print);
	return (to_print);
}

void	print_ptr(t_machine *state)
{
	unsigned long	raw;
	char			*to_print;
	size_t			to_print_size;

	raw = va_arg(state->v_args, unsigned long);
	to_print = get_str(raw);
	if (to_print == NULL)
		return ;
	to_print = apply_flags(state, to_print);
	to_print_size = ft_strlen(to_print);
	write(1, to_print, to_print_size);
	free(to_print);
	state->printed += (int)to_print_size;
}
