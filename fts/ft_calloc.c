/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:12:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/09 15:22:38 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t totalsize;
	void *result;

	totalsize = nmemb * size;
	result = malloc(totalsize);

	if (result == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (result);
	}
	ft_memset(result, 0, totalsize);
	return (result);
}