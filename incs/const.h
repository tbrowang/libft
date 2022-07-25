/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang </var/spool/mail/tbrowang>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:36:20 by tbrowang          #+#    #+#             */
/*   Updated: 2022/05/15 18:58:06 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_H
# define CONST_H

# define CONV_CHAR '%'
# define FLAGS " +-0#"
# define CONV_TYPE "cspdiuxX%"

typedef enum e_state
{
	STATE_DEFAULT,
	STATE_CONVERSION_FLAGS,
	STATE_CONVERSION_LENGTH,
	STATE_CONVERSION_PRECISION,
	STATE_CONVERSION_PRINT,
	STATE_WRONG_FLAG,
	STATE_END
}	t_state;

# ifdef __APPLE__
#  define NULL_PLACEHOLDER "0x0"
#  define NULLSTR_PLACEHOLDER "(null)"
#  define OS "APPLE"
# else
#  define NULL_PLACEHOLDER "(nil)"
#  define NULLSTR_PLACEHOLDER "(null)"
#  define OS "LINUX"
# endif

#endif
