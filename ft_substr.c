/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:45:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 21:10:44 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(len) + 1);
	if (len >= 0)
	{
		while (s[i] != start)
			i++;
		while (len > 0)
		{
			dest[i++] == s[i++];
			len--;	
		}
	}
	else if(len < 0)
	
	dest[i] = '\0';
	return (dest);
}
