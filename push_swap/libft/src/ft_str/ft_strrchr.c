/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:42:23 by gonferna          #+#    #+#             */
/*   Updated: 2024/08/28 17:32:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	p;

	p = ft_strlen(s);
	while (p >= 0)
	{
		if (s[p] == (unsigned char)c)
			return ((char *)s + p);
		p--;
	}
	return (NULL);
}
