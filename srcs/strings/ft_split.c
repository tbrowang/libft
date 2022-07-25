/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrowang <contact@tbrowang.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:18:12 by tbrowang          #+#    #+#             */
/*   Updated: 2021/11/23 22:58:50 by tbrowang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	wordlen(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] == c))
		i++;
	return (i);
}

static int	wordcount(const char *str, char c)
{
	int	nb_word;
	int	state;

	nb_word = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		state = wordlen(str, c);
		str += state;
		if (state)
			nb_word++;
	}
	return (nb_word);
}

static char	*allocword(const char *str, int size)
{
	char	*dest;

	dest = malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[size] = '\0';
	while (size--)
		dest[size] = str[size];
	return (dest);
}

static int	allocloop(char **strs, int size, char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	while (i < size)
	{
		while (*s && *s == c)
			s++;
		len = wordlen(s, c);
		strs[i] = allocword(s, len);
		if (strs[i] == NULL)
			return (1);
		s += len;
		i++;
	}
	strs[size] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		state;
	int		size;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	size = wordcount(s, c);
	strs = malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	state = allocloop(strs, size, s, c);
	if (state == 1)
	{
		while (strs[i] != NULL)
		{
			free(strs[i]);
			i++;
		}
		free(strs);
	}
	return (strs);
}
