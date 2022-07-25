/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:12:16 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:25:33 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

static	void	__swap(void **a, void **b)
{
	void	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

t_doubly_lst	*doubly_lst_sort(t_doubly_lst *lst, int (*cmp)(void *, void *))
{
	t_doubly_lst	*sorted_list;
	t_doubly_lst	*fast;
	t_doubly_lst	*slow;

	sorted_list = doubly_lst_cpy(lst);
	if (!sorted_list)
		return (NULL);
	slow = sorted_list;
	while (slow->next)
	{
		fast = slow->next;
		while (fast)
		{
			if (cmp(slow->data, fast->data) > 0)
				__swap(&slow->data, &fast->data);
			fast = fast->next;
		}
		slow = slow->next;
	}
	return (sorted_list);
}
