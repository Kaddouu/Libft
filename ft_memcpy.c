/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 21:47:21 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/07 22:46:11 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	char *restrict dest;
	const char *restrict source;
	dest = (char *)dst;
	source = (const char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	// test ft_memcpy
	char src[] = "Hello, world!";
	char dst[20];
	ft_memcpy(dst, src, strlen(src) + 1);
	printf("%s\n", dst);

	// test vrai memcpy
	char src2[] = "Hello, world!";
	char dst2[20];
	memcpy(dst2, src2, strlen(src2) + 1);
	printf("%s\n", dst2);

	return (0);
}*/