/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:21:34 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/07 23:28:04 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*int	main(void)
{
	int i;
	char buffer[10];
	char buffer2[10];

	// test avec mon memset
	i = 0;
	ft_memset(buffer, 'B', 10);
	while (i < 10)
	{
		printf("%c ", buffer[i]);
		i++;
	}
	printf("\n");
	// test avec vrai memset
	i = 0;
	memset(buffer2, 'B', 10);
	while (i < 10)
	{
		printf("%c ", buffer2[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/