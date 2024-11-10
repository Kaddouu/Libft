/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:45:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/10 14:29:29 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	if (len == 0)
		return (NULL);
	if (len > 0)
	{	
		while (i != start)
			i++;
		while (len-- > 0)
		{
			dest[i] = s[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
