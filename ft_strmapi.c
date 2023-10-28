/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:51:34 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 20:24:04 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		n;
	char	*str;

	n = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		str[n] = f(n, s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
/*
char returnchr(unsigned int index, char c)
{
    return c;
}

int main(void)
{
    char	s[] = "teste teste TESTE";
	char	*res;
	
    res = ft_strmapi(s, returnchr);
	printf("A nova string: %s\n", res);
    return 0;
}*/