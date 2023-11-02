/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:17 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/28 16:38:40 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
		p[i++] = 0;
}
//ft_bzero é uma função em C
//que zera uma área de memória, preenchendo-a com zeros.
/*int	main(void)
{
	char	s[] = "Teste dos Zeros!";
	size_t	n = sizeof(s) - 1;
	
	printf("Antes do bzero: %s\n", s);
	ft_bzero(s, n);
	printf("Depois do bzero: %s\n", s);
	return (0);
}*/