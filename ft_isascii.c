/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:10:38 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/07 22:48:49 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

/*int	main(void)
{
	printf("%d\n", ft_isascii(239));
	int c;
	int result;

	c = 239;
	result = isascii(c);
	printf("When %c is passed, return (value is %d\n", c, result));
}*/