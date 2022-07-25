/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_tail_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:12:53 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:13:09 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

t_head_tail	*head_tail_new(t_doubly_lst *head, t_doubly_lst *tail)
{
	t_head_tail				*new;

	new = (t_head_tail *)malloc(sizeof(t_head_tail));
	if (!new)
		return (NULL);
	new->head = head;
	new->tail = tail;
	return (new);
}
