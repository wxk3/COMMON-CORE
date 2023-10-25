/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:16:46 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/25 18:51:47 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	n;

	n = 0;
	while (s[n] != '\0')
	{
		f(n, &s[n]);
		n++;
	}
}

/*void print_string(unsigned int index, char *c)
{
    printf("Caractere na posição %u: %c\n", index, *c);
}

int main(void)
{
    char s[] = "teste teste TESTE";

    ft_striteri(s, print_string);

    return 0;
}*/