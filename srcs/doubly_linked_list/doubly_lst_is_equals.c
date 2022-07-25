/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_is_equals.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:10:14 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:10:48 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

t_bool	doubly_lst_is_equals(t_doubly_lst *lst, t_doubly_lst *lst2)
{
	t_doubly_lst	*current;
	t_doubly_lst	*current2;

	current = lst;
	current2 = lst2;
	while (current && current2)
	{
		if (current->data != current2->data)
			return (FALSE);
		current = current->next;
		current2 = current2->next;
	}
	return (!current && !current2);
}
