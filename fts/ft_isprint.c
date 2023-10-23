/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/23 18:11:40 by gonferna         ###   ########.fr       */
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
int	main(void)
{
	int	a = 'a';
	int	b = '1';
	int	c = '.';
	int	d = 129;

	printf("%i\n", ft_isprint(a));
	printf("%i\n", ft_isprint(b));
	printf("%i\n", ft_isprint(c));
	printf("%i\n", ft_isprint(d));
}