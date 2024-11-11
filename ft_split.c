/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:46:04 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/11 16:13:27 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static size_t	num_words(char const s, char c)
{
	size_t	i;
	size_t	num;

	num = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			num++;
		i ++;
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	word_len;
	int		i;

	res = (char **)malloc((num_words(s, c) + 1) * sizeof(char*));
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
			res[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	res[i] = NULL;
	return (res);
}

/*int main()  
{  
    int i;  
    char* result[] = {};  
    printf("String Array:\n");  
    for(i = 0; i < 3; i++)  
    {  
        printf("%s\n", Array[i]);  
    }  
    return 0;  
}*/