/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:46:04 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/11 17:28:58 by ilkaddou         ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_len;
	size_t		i;

	res = (char **)malloc((num_words(s, c) + 1) * sizeof (char*));
	if (!res)
		return (NULL);
	i = 0;
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
			res[i] = (char*)malloc(sizeof (char) * (word_len + 1));
			/*if (!res[i])
			{
				while (i > 0)
					free(res[--i]);
				free(res);
				return (NULL);
			}*/
			res[i] = ft_substr(s, 0, word_len);
			res[i++][word_len] = '\0';
			s += word_len;
		}
	}
	res[i] = NULL;
	printf("i = %zu\n", i);
	return (res);
}

/*int main()  
{  
	char *s = "Bonjour Bonjour ";
    char c = 'o';
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