/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:24 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/23 18:10:07 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	printf("%i\n", ft_isascii(a));
	printf("%i\n", ft_isascii(b));
	printf("%i\n", ft_isascii(c));
	printf("%i\n", ft_isascii(d));
}*/