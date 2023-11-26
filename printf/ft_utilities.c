/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:50:08 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/26 15:11:46 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, long int *count)
{
	write(1, &c, 1);
	*count += 1;
}

void	ft_putstr(const char *s, long int *count)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", count);
		return ;
	}
	while (s[i] != '\0')
	{
		ft_putchar(s[i], count);
		i++;
	}
}

void	ft_putnbr(int n, long int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, count);
	}
	ft_putchar(n % 10 + '0', count);
}

void	ft_putunsignedint(unsigned int n, long int *count)
{
	if (n >= 10)
	{
		ft_putunsignedint(n / 10, count);
	}
	ft_putchar(n % 10 + '0', count);
}
