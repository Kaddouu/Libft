/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:21:34 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 19:56:04 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
int	main(void)
{
	int i;
	char buffer[50];
	char buffer2[10];

	// test avec mon memset
	i = 0;
	ft_memset(buffer, 'B', sizeof(buffer));
	while (i < sizeof(buffer))
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
}