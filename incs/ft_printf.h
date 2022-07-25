/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:36:55 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:41:57 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include "libft_bool.h"
# include "const.h"

typedef struct s_op
{
	t_bool		alternate;
	t_bool		zero_padded;
	t_bool		justified_left;
	t_bool		space;
	t_bool		sign;
	t_bool		precision;
	t_bool		length;
	size_t		p_val;
	size_t		l_val;
	char		type;
	const char	*start;
}	t_op;

typedef struct s_machine
{
	const char		*(*callback[6])(const char *, struct s_machine *);
	va_list			v_args;
	int				printed;
	t_state			current;
	t_op			op;

}	t_machine;

int			ft_printf(const char *format, ...)
			__attribute__((format(printf, 1, 2)));

void		print_char(t_machine *state);
void		print_str(t_machine *state);
void		print_ptr(t_machine *state);
void		print_int(t_machine *state);
void		print_u_int(t_machine *state);
void		print_hex_low(t_machine *state);
void		print_hex_up(t_machine *state);
void		print_percent(t_machine *state);

const char	*state_default(const char *format, t_machine *state);
const char	*state_conversion(const char *format, t_machine *state);
const char	*state_conversion_flags(const char *format, t_machine *state);
const char	*state_conversion_length(const char *format, t_machine *state);
const char	*state_conversion_precision(const char *format, t_machine *state);
const char	*state_conversion_print(const char *format, t_machine *state);
const char	*state_wrong_flag(const char *format, t_machine *state);

char		*apply_length_flag(t_machine *state, char *original);
char		*apply_sharp_flag(t_machine *state, char *original, char *prefix);
char		*apply_precison_flag(t_machine *state, int raw, char *original);
char		*apply_special_cases(t_machine *state, int raw, char *original);

void		init_state(t_machine *state);

void		padding(t_machine *state, char *str, int padding_size);
#endif
