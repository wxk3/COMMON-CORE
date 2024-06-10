/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 21:22:18 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (ft_strlen(str));
	while (i >= 0)
	{
		if (str[i] == ((char)c))
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
/*int	main(void)
{
	char	s[] = "Em busca do ultima ocurrencia";
	char	c = 'e';
	char	*res = ft_strrchr(s, c);
	
	printf("A última ocurrência de '%c' é no carácter: %ld\n", c, (res - s));
}*/
