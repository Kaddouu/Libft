/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:37:50 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 16:46:12 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < dstsize)
	{	
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}
