/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:06:59 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/18 09:23:23 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

# include "libft_bool.h"

typedef struct s_doubly_lst
{
	void						*data;
	struct s_doubly_lst			*next;
	struct s_doubly_lst			*prev;
}	t_doubly_lst;

typedef struct s_head_tail
{
	t_doubly_lst			*head;
	t_doubly_lst			*tail;
}	t_head_tail;

t_head_tail		*head_tail_new(t_doubly_lst *head, t_doubly_lst *tail);
t_doubly_lst	*doubly_lst_new(void *data);

void			doubly_lst_set_next(t_doubly_lst *node, t_doubly_lst *next);

void			head_tail_add_front(t_head_tail *lst, t_doubly_lst *node);
void			head_tail_add_back(t_head_tail *lst, t_doubly_lst *node);

void			doubly_lst_add_front(t_doubly_lst **lst, t_doubly_lst *node);
void			doubly_lst_add_back(t_doubly_lst **lst, t_doubly_lst *node);
void			doubly_lst_print(t_doubly_lst *lst);

t_doubly_lst	*doubly_lst_sort(t_doubly_lst *lst, int (*cmp)(void *, void *));
t_doubly_lst	*doubly_lst_cpy(t_doubly_lst *lst);
void			doubly_lst_clear(t_doubly_lst **lst, void (*del)(void *));
t_doubly_lst	*doubly_lst_last(t_doubly_lst *lst);

t_bool			doubly_lst_is_equals(t_doubly_lst *lst, t_doubly_lst *lst2);
t_bool			doubly_lst_is_sort(t_doubly_lst *lst,
					int (*cmp)(void *, void *));
int				doubly_lst_size(t_doubly_lst *lst);

#endif