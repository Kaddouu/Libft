/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:09:26 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/09 17:05:33 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char const *set, char c)
{
	t_size	i;

	i = 0;
	while (set[i++])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	i;
	t_size	start;
	t_size	end;
	char	*dest;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_isset(set, s1[start]) == 1)
		start++;
	while (ft_isset(set, s1[end]) == 1)
		end--;
	dest = (char *)malloc(sizeof(char) * (end - start));
	if (!dest)
		return (NULL);
	while (start < end)
		dest[i] = s1[start++];
	return (dest);
}
