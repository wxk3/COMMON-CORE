/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:49:11 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/11 19:27:07 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little)
	{
		return (NULL);
	}
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && little[j]
			&& i + j < len && big[i + j])
			j++;
		if (!little[j])
		{
			return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
