/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/24 16:57:49 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*int	main(void)
{
	int	a = 'a';
	int	b = '1';
	int	c = '.';
	int	d = 129;

	printf("%i\n", ft_isprint(a));
	printf("%i\n", ft_isprint(b));
	printf("%i\n", ft_isprint(c));
	printf("%i\n", ft_isprint(d));
}*/