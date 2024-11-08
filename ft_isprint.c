/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:10:38 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 19:39:22 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_isprint(126));
	int c;
	int result;

	c = 126;
	result = isprint(c);
	printf("When %c is passed, return (value is %d\n", c, result));
}*/