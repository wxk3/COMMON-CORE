/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:42 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 17:04:52 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ((char)c))
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == ((char)c))
	{
		return ((char *)str + i);
	}
	return (NULL);
}
/*int	main(void)
{
	char	s[] = "This is just a script";
	
	printf("%s\n", ft_strchr(s, 'j')); 
//a funçao vai procurar um caracter igual a 'j' e caso encontre,
//vai criar um pointer para esse ponto e retornar a string a partir daí
}*/