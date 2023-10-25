/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:57:23 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 15:07:04 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_getword(char const *s, char *str, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	char	**str;

	i = 0;
	n = 0;
	str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			str[n] = ft_getword(&s[i], str[n], c);
			n++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	str[n] = NULL;
	return (str);
}
/*int	main(void)
{
	char	s[] = "Isto é um teste";
	char	**result;
	int	i;

	i = 0;
	result = ft_split(s, ' ');
	while (result[i] != NULL)
	{
		printf("Palavra %d: %s\n", i, result[i]);
		i++;
	}
}*/