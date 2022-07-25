/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_cpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:09:49 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:10:05 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

t_doubly_lst	*doubly_lst_cpy(t_doubly_lst *lst)
{
	t_doubly_lst	*current;
	t_doubly_lst	*cpy;
	t_doubly_lst	*current_cpy;

	if (!lst)
		return (NULL);
	current = lst;
	cpy = doubly_lst_new(current->data);
	if (!cpy)
		return (NULL);
	current_cpy = cpy;
	while (current->next)
	{
		current = current->next;
		current_cpy->next = doubly_lst_new(current->data);
		current_cpy->next->prev = current_cpy;
		current_cpy = current_cpy->next;
		if (!current_cpy)
		{
			doubly_lst_clear(&cpy, NULL);
			return (NULL);
		}
	}
	return (cpy);
}
