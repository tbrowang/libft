/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_is_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:11:19 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:11:23 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

t_bool	doubly_lst_is_sort(t_doubly_lst *lst, int (*cmp)(void *, void *))
{
	t_doubly_lst	*sorted_list;
	t_bool			is_sort;

	sorted_list = doubly_lst_sort(lst, cmp);
	is_sort = doubly_lst_is_equals(lst, sorted_list);
	doubly_lst_clear(&sorted_list, NULL);
	return (is_sort);
}
