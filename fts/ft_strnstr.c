/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:49:11 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/09 14:26:56 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && len > i)
	{
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] = "O coelho vai correr";
	char str2[] = "vai";
	char *result = ft_strnstr(str1, str2, 15);

	if (result != NULL)
	{
		printf("Subcadeia encontrada: %s\n", result);
	}
	else
	{
		printf("Subcadeia não encontrada.\n");
	}

	return (0);
}*/