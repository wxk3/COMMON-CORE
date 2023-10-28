/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:01 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 15:51:21 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
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
