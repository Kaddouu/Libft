/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:09:26 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/11 15:31:08 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*dest;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_isset(set, s1[start]) == 1)
		start++;
	while (ft_isset(set, s1[--end]) == 1)
		end--;
	dest = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!dest)
		return (NULL);
	while (start <= end)
		dest[i++] = s1[start++];
	dest[i] = '\0';
	return (dest);
}
/*int	main(int ac, char**av)
{
	if (ac != 3)
		return (1);
	printf("%s\n", ft_strtrim(av[1], av[2]));
	return (0);
}*/
