/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_convert.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <tbrowang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 06:00:17 by tbrowang          #+#    #+#             */
/*   Updated: 2022/07/25 19:22:51 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONVERT_H
# define LIBFT_CONVERT_H

int					ft_atoi(const char *nptr);
char				*ft_itoa(int n);
char				*utoa_base(unsigned long num, char *base,
						unsigned int base_size);
char				*ltoa_base(long num, char *base, unsigned int base_size);
#endif
