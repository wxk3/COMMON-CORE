/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:18 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/24 17:43:48 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 97 && i <= 122)
	{
		i -= 32;
	}
	return (i);
}
/*int	main(void)
{
	int	i = 'a';
	
	printf("%c\n", ft_toupper(i));
}*/
