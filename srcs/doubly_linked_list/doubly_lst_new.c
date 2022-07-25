/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_lst_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:11:31 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 22:57:36 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "doubly_linked_list.h"
#	include <stdlib.h>

t_doubly_lst	*doubly_lst_new(void *data)
{
	t_doubly_lst			*new;

	new = (t_doubly_lst *)malloc(sizeof(t_doubly_lst));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
