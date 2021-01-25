/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:38:51 by pceccoli          #+#    #+#             */
/*   Updated: 2021/01/25 14:09:50 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int NumParole(const char *s, char c)
{
	size_t i;

	i = 0;
	while(*s)
	{
		if(*s != c)
			i++;
			while (*s != c && *s)
				s++;
		if (*s == c)
			s++;
	}
	return (i);
}

char				**ft_split(char const *s, char c)
{
	char 	**ret;
	char	*from;
	size_t	i;
	size_t	size;

	if (!s || !(ret = (char**)malloc(sizeof(char*) * NumParole(s, c) + 1)))
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			from = (char*)s;
			while (*s && *s != c)
				s++;
			size = s - from + 1;
			if (!(ret[i] = (char*)malloc(size)))
				return (0);
			ft_strlcpy(ret[i++], from, size);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}
