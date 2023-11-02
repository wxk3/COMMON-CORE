/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:19 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/23 16:25:10 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
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

	printf("%i\n", ft_isalnum(a));
	printf("%i\n", ft_isalnum(b));
	printf("%i\n", ft_isalnum(c));
}*/