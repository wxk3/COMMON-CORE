/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:21 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/11 15:45:12 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0) 
		return ((char *) big);
	while (*big != '\0' && n-- >= little_len) 
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0) 
			return ((char *)big);
		big++;
	}
	return (NULL); 
}
