/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilkaddou <ilkaddou@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:11:18 by ilkaddou          #+#    #+#             */
/*   Updated: 2024/11/08 18:24:06 by ilkaddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*str;

	if ((nmemb * size) > INT_MAX)
		return (NULL);
	str = malloc(sizeof nmemb * size);
	if (!str)
		return (NULL);
	ft_bzero(str, sizeof(nmemb * size));
}
