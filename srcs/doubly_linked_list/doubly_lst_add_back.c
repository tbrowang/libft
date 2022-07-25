/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_add_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:16 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:09:17 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"

void	doubly_lst_add_back(t_doubly_lst **lst, t_doubly_lst *node)
{
	t_doubly_lst	*tmp;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = node;
		return ;
	}
	tmp = doubly_lst_last(*lst);
	tmp->next = node;
	node->prev = tmp;
}
