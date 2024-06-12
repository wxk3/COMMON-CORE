/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:12 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/11 15:42:13 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	p;

	srcsize = ft_strlen(src);
	p = 0;
	if (!dst || !src)
		return (0);
	if (dstsize != 0)
	{
		while (src[p] != '\0' && p < (dstsize - 1))
		{
			dst[p] = src[p];
			p++;
		}
		dst[p] = '\0';
	}
	return (srcsize);
}
