/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:49:11 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 21:35:54 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)haystack);
	}
	if (!needle)
	{
		return (NULL);
	}
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j]
			&& i + j < len && haystack[i + j])
			j++;
		if (!needle[j])
		{
			return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
    char haystack[] = "Esta é uma haystack de exemplo.";
    char needle[] = "stack";
    size_t len = 25;
	char *result = ft_strnstr(haystack, needle, len);

    if (result)
    {
        printf("String '%s' encontrada em posição: %ld\n", needle, 
		(result - haystack));
    }
    else
    {
        printf("String '%s' não encontrada dentro do limite
		 especificado.\n", needle);
    }

    return 0;
}*/