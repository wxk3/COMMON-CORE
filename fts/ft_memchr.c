/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:42:31 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 01:04:46 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)arr)[i] == (unsigned char)c)
		{
			return ((void *)arr + i);
		}
		i++;
	}
	return (NULL);
}
/*int main(void)
{
    char arr[] = "foi, um, teste!";
    char search = 'a';
    size_t len = sizeof(arr) - 1;

    void *result = ft_memchr(arr, search, len);
    if (result != NULL) {
        printf("'%c' encontrado na posição %zu\n", search,
		 (size_t)((char *)result - arr));
    } else {
        printf("'%c' não encontrado na string.\n", search);
    }
}*/
