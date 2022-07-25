/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_tail_add_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:12:42 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:12:47 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"

void	head_tail_add_front(t_head_tail *lst, t_doubly_lst *node)
{
	doubly_lst_set_next(node, lst->head);
	node->next = lst->head;
	lst->head = node;
	if (!node->next)
		lst->tail = lst->head;
}
