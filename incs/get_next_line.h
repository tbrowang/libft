/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 05:29:30 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 22:56:31 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stddef.h>
# include "libft_bool.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif
# define MAX_OPEN 65535

typedef struct s_buffer
{
	int				length;
	int				index;
	char			*buff;
	t_bool			eof;
	struct s_buffer	*next;
}		t_buffer;

char	*get_next_line(int fd);
#endif
