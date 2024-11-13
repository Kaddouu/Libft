/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:07:25 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/13 16:40:50 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nlen(n)
{
	
}


char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		count;

	len = 0;
	count = n;
	if (n == -2147483648)
		return ("-2147483648");
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = ('0');
	if (n < 0)
	{
		len += 1;
		str[0] = '-';
		n = -n;
	}
	while (count)
	{
		count /= 10;
		len += 1;
	}
	while (n)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
// int main()
// {
	// printf("%s\n", ft_itoa(-10));
	// free(ft_itoa);
// }
