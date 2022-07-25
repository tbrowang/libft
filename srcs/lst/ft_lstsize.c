/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:09:13 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/22 19:25:09 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len_of_lst;

	len_of_lst = 0;
	while (lst)
	{
		len_of_lst++;
		lst = lst->next;
	}
	return (len_of_lst);
}
