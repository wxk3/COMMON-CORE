/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 18:32:57 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s, ft_strlen(s) + 1);
	return (duplicate);
}
/*int	main(void)
{
	char	s[] = "este texto é da string s";
	char	*duplicate;
	
	duplicate = ft_strdup(s);
	printf("String duplicada: %s\n", duplicate);
}*/
