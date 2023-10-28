/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:12:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 15:53:47 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*result;

	totalsize = nmemb * size;
	result = malloc(totalsize);
	if (result == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (result);
	}
	ft_memset(result, 0, totalsize);
	return (result);
}
//é uma função em C que aloca memória para um número especificado
//de elementos e inicializa todos eles com zero.
/*int	main(void)
{
	char	*array;
	int		i;

	i = 0;
    array = (char *)ft_calloc(3, sizeof(char));
	array[0] = 'T';
    array[1] = 'e';
    array[2] = 's';
    if (array == NULL)
	{
        return (1);
    }
	while(i < 3)
	{
		printf("%c\n", array[i]);
		i++;
	}
	free(array);
}*/