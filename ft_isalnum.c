/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:25:27 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/07 22:48:45 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('5'));
	int c;
	int result;

	c = '2';
	result = isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result));
}*/