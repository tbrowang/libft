/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:47:37 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:14:00 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft_strings.h"
#include "libft.h"
#include <stdlib.h>

void	padding(t_machine *state, char *str, int size)
{
	char	c;

	if (state->op.zero_padded == TRUE
		&& state->op.justified_left == FALSE)
		c = '0';
	else
		c = ' ';
	while (*str)
		str++;
	while (size-- > 0)
		*str++ = c;
}

char	*apply_length_flag(t_machine *state, char *s)
{
	size_t	size;
	char	*str;
	int		pa_size;
	int		i;

	size = ft_strlen(s);
	if (state->op.length == FALSE || state->op.l_val <= size)
		return (s);
	i = 0;
	pa_size = state->op.l_val - size;
	str = ft_calloc(state->op.l_val + 1, sizeof(char));
	if (str == NULL)
		return (s);
	if ((*s == '+' || *s == '-') && state->op.zero_padded)
		str[i++] = *s;
	if (state->op.justified_left == TRUE)
		ft_strlcat(str, s + i, state->op.l_val + 1);
	padding(state, str, pa_size);
	if (state->op.justified_left == FALSE)
		ft_strlcat(str, s + i, state->op.l_val + 1);
	free(s);
	return (str);
}

char	*apply_precison_flag(t_machine *state, int raw, char *s)
{
	char	*str;
	char	*save;
	size_t	n_size;
	size_t	str_size;

	if (state->op.precision == FALSE)
		return (s);
	save = s;
	if (raw < 0)
		++s;
	n_size = ft_strlen(s);
	if (n_size >= state->op.p_val)
		return (save);
	str_size = (state->op.p_val - n_size) + n_size;
	if (raw < 0)
		++str_size;
	str = ft_calloc(str_size + 1, sizeof(char));
	if (str == NULL)
		return (s);
	else if (raw < 0)
		ft_strlcat(str, "-", str_size + 1);
	fill_str(ft_strchr(str, '\0'), '0', (state->op.p_val - n_size));
	ft_strlcat(str, s, str_size + 1);
	free(save);
	return (str);
}

char	*apply_sharp_flag(t_machine *state, char *s, char *prefix)
{
	char	*str;

	if (state->op.alternate == FALSE
		|| ft_strncmp(s, "0", ft_strlen(s)) == 0)
		return (s);
	str = ft_strjoin(prefix, s);
	if (str == NULL)
		return (s);
	free(s);
	return (str);
}

char	*apply_special_cases(t_machine *state, int raw, char *s)
{
	char	*str;

	if (state->op.precision == TRUE
		&& state->op.p_val == 0 && raw == 0)
	{
		str = ft_calloc(1, sizeof(char));
		if (str == NULL)
			return (s);
		free(s);
		return (str);
	}
	return (s);
}
