/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:46:04 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/17 12:59:36 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_words(char const *s, char c)
{
	size_t	num;

	num = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			num++;
		while (*s != c && *s)
			s++;
	}
	return (num);
}

static void	ft_free(char **res, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(res[j]);
		j++;
	}
	free(res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_len;
	size_t	i;

	i = 0;
	res = (char **)malloc((num_words(s, c) + 1) * sizeof (char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, word_len);
			if (!res[i - 1])
			{	
				ft_free(res, i);
				return (NULL);
			}	
			s += word_len;
		}
	}
	res[i] = NULL;
	return (res);
}
/*int main()  
{  
	char *s = "Bonjour Bonjour ";
    char c = ' ';
	int i;  
    char **result = ft_split(s, c);
	if (result)
	{
		i = 0;
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	} 
    return 0;  
}*/