/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:45:23 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/09 14:59:19 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;

	if (len == 0)
		return (NULL);
	if (len > 0)
	{	
		dest = (char *)malloc(sizeof(char) * (len + 1));
		if (!dest)
			return (NULL);
		while (s[i] != start)
			i++;
		while (len > 0)
		{
			dest[i++] == s[i++];
			len--;	
		}
	}
	dest[i] = '\0';
	return (dest);
}
