/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:37:01 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 17:57:12 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return ((char *)big);
	while (big[i] || i < len)
	{	
		while (big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int main(int ac, char**argv)
{	
	if (ac != 3)
		return (0);
	char *big = argv[1];
	char *little = argv[2];
	
	printf("%s\n", ft_strnstr(big, little, 10));
	//printf("%s\n", strnstr(big, little, 10));
	return (0);
}*/
