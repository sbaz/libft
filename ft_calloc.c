/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pceccoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:55:53 by pceccoli          #+#    #+#             */
/*   Updated: 2021/01/21 15:56:01 by pceccoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (!(mem = malloc(nmemb * size)))
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
