/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:06:55 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/17 11:29:03 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pointer;
	size_t	i;

	pointer = (char *)s;
	i = 0;
	if (c == 0 && n == 0)
		return (NULL);
	if (c == 0)
		return (pointer);
	while (i < n - 1)
	{
		if (pointer[i] == (char)c)
			return (&pointer[i]);
		i++;
	}
	return (NULL);
}
