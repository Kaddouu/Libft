/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:21:02 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/12 16:55:44 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;
	size_t			i;

	pointer1 = (unsigned char *)s1;
	pointer2 = (unsigned char *)s2;
	i = 0;
	while (pointer1[i] == pointer2[i] && i < n)
		i ++;
	if (i == n)
		return (0);
	return (pointer1[i] - pointer2[i]);
}
