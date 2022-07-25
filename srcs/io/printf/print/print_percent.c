/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:42:59 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 16:43:01 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	print_percent(t_machine *state)
{
	write(1, "%", 1);
	state->printed += 1;
}
