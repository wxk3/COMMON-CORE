/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:22 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/23 18:07:49 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	int	d = 'A';

	printf("%i\n", ft_isalpha(a));
	printf("%i\n", ft_isalpha(b));
	printf("%i\n", ft_isalpha(c));
	printf("%i\n", ft_isalpha(d));
}*/
