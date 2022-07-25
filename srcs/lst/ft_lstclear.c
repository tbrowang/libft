/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:23:14 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/22 19:20:51 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*prev;
	t_list	*curr;

	curr = *lst;
	while (curr)
	{
		(*del)(curr->content);
		prev = curr;
		curr = curr->next;
		free(prev);
	}
	*lst = NULL;
}
