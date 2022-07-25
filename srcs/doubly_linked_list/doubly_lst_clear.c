/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_clear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:40 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:23:44 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

void	doubly_lst_clear(t_doubly_lst **lst, void (*del)(void *))
{
	t_doubly_lst	*current;
	t_doubly_lst	*next;

	if (!lst || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		if (del)
			del(current->data);
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}
