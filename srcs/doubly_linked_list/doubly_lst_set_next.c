/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_set_next.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:11:47 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:11:53 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include	"doubly_linked_list.h"

void	doubly_lst_set_next(t_doubly_lst *node, t_doubly_lst *next)
{
	if (node)
		node->next = next;
	if (next)
		next->prev = node;
}
