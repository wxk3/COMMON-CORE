/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:59:31 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/26 15:03:52 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, int lower, long int *count)
{
	if (n >= 16)
		ft_puthexa(n / 16, lower, count);
	if (lower)
		ft_putchar(HEXLOW[n % 16], count);
	else
		ft_putchar(HEXUP[n % 16], count);
}

void	ft_putlonghexa(unsigned long int n, long int *count)
{
	if (n >= 16)
		ft_putlonghexa(n / 16, count);
	ft_putchar(HEXLOW[n % 16], count);
}

void	ft_putpointer(unsigned long int n, long int *count)
{
	if (!n)
	{
		ft_putstr("(nil)", count);
		return ;
	}
	ft_putstr("0x", count);
	ft_putlonghexa(n, count);
}
