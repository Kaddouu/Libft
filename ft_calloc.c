/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:11:18 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/12 17:13:48 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*str;

	if ((nmemb * size) > INT_MAX)
		return (NULL);
	str = (int *)malloc(sizeof(int) * (nmemb * size));
	if (!str)
		return (NULL);
	ft_bzero(str, nmemb * size);
	return (str);
}
