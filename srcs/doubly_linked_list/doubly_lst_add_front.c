/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_add_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:09 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:09:12 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"

void	doubly_lst_add_front(t_doubly_lst **lst, t_doubly_lst *node)
{
	node->next = *lst;
	(*lst)->prev = node;
	*lst = node;
}