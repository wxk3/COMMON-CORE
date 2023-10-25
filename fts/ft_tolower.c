/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:12 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/24 17:43:18 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int i)
{
	if (i >= 65 && i <= 90)
	{
		i += 32;
	}
	return (i);
}
/*int	main(void)
{
	int	i = 'A';
	
	printf("%c\n", ft_tolower(i));
}*/