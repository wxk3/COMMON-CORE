/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:26 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/23 18:11:20 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	printf("%i\n", ft_isdigit(a));
	printf("%i\n", ft_isdigit(b));
	printf("%i\n", ft_isdigit(c));
	printf("%i\n", ft_isdigit(d));
}*/
