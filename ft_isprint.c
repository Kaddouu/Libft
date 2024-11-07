/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:10:38 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/07 22:47:37 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

#include <ctype.h>
#include <stdio.h>

/*int	main(void)
{
	printf("%d\n", ft_isprint(126));
	int c;
	int result;

	c = 126;
	result = isprint(c);
	printf("When %c is passed, return (value is %d\n", c, result));
}*/