/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:24:50 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 21:34:53 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	inicio;
	size_t	final;
	char	*str;

	inicio = 0;
	final = ft_strlen(s1);
	while (s1[inicio] && ft_char_in_set(s1[inicio], set))
		inicio++;
	while (final > inicio && ft_char_in_set(s1[final - 1], set))
		final--;
	str = (char *)malloc(sizeof(*s1) * (final - inicio + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (inicio < final)
		str[i++] = s1[inicio++];
	str[i] = '\0';
	return (str);
}
/*int	main(void)
{
	char	s[] = "   Isto é um teste  ";
	char	*str;
	
	str = ft_strtrim(s, " ");
	printf("O resultado da função é: %s\n", str);
}*/
