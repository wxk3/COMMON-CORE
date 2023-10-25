/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:01 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 20:13:25 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char	str[] = "Qual o tamanho desta string?";
	int	i;

	i = ft_strlen(str);
	printf("%s\n", str);
	printf("O tamanho é: %d\n", i);
}*/
