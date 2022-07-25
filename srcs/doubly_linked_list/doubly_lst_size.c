/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:11:57 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:12:08 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"

int	doubly_lst_size(t_doubly_lst *lst)
{
	int				size;
	t_doubly_lst	*current;

	size = 0;
	current = lst;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}
