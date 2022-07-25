/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head_tail_add_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:12:28 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:12:37 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"

void	head_tail_add_back(t_head_tail *lst, t_doubly_lst *node)
{
	doubly_lst_set_next(lst->tail, node);
	lst->tail = node;
	if (!node->prev)
		lst->head = lst->tail;
}
