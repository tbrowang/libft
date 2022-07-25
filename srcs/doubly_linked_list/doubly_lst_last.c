/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:08:56 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:09:06 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include	"doubly_linked_list.h"
#	include	<stdlib.h>

t_doubly_lst	*doubly_lst_last(t_doubly_lst *lst)
{
	t_doubly_lst	*last;

	last = lst;
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}
