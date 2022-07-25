/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 06:11:13 by tbrowang          #+#    #+#             */
/*   Updated: 2021/12/01 08:26:52 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_io.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nbr;

	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = -n;
	nbr = 1;
	while (n / nbr <= -10)
		nbr *= 10;
	while (nbr > 0)
	{
		ft_putchar_fd('0' + -(n / nbr % 10), fd);
		nbr /= 10;
	}
}
