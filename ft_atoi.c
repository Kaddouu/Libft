/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:58:30 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/10 14:39:03 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	what_sign;
	int	nbr;

	what_sign = 1;
	nbr = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
	{
		i++;
	}
	while (nptr[i] == '+' || nptr[i] == '-')
	{	
		if (nptr[i] == '-')
			what_sign *= -1;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		nbr = (nptr[i] - 48) + nbr * 10;
		i++;
	}
	return ((unsigned int)nbr * what_sign);
}
