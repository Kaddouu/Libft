/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:48:02 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 16:56:43 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) ;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
#include <string.h>
int main()
{
	const char	*s = "bbbbaccccc";
	int	c = 'a';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
}