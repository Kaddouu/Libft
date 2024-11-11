/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:46:04 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/11 15:18:00 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_words (char const s, char c)
{
	int	i;
	int	num;
	
	num = 1;
	i = 0;
	while (s[i])
	{
		if(s[i] = c)
			num++;
		i ++;
	}
	return (num);
}

char **ft_split(char const *s, char c)
{
	int	num_words (char const s, char c)
}
