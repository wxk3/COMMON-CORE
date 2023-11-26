/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:24:07 by goncaloferr       #+#    #+#             */
/*   Updated: 2023/11/19 16:39:33 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_callen(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		len = 1;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static void	ft_getdigit(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_getdigit(n / 10, str, i);
		ft_getdigit(n % 10, str, i);
	}
	else
	{
		str[(*i)++] = n + 48;
	}
}

char	*ft_utoa(unsigned int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_callen(nbr) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	ft_getdigit(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
