/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:03:19 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/15 13:47:49 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	unsigned int	len;
	int				nb;

	nb = n;
	len = 1;
	if (n < 0 && n != -2147483648)
	{
		nb = -n;
		len++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	return (len);
}
