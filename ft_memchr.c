/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:06:55 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/12 14:48:03 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n - 1)
	{
		if (pointer[i] == (unsigned char)c)
			return ((char *)&pointer[i]);
		i++;
	}
	return (NULL);
}
