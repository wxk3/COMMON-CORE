/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:55 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/06 17:29:40 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	size_t	len_dest;
	size_t	len_src;
	size_t	res;
	size_t	i;

	s = (char *)src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (size > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + size;
	while (s[i] && (len_dest + 1) < size)
	{
		dest[len_dest] = s[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}
