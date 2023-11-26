/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:47:59 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/26 15:10:27 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_formats(char str, long int *count, va_list args)
{
	if (str == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (str == 's')
		ft_putstr(va_arg(args, const char *), count);
	else if (str == 'p')
		ft_putpointer(va_arg(args, unsigned long int), count);
	else if (str == 'd' || str == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (str == 'u')
		ft_putunsignedint(va_arg(args, unsigned int), count);
	else if (str == 'x')
		ft_puthexa(va_arg(args, unsigned int), 1, count);
	else if (str == 'X')
		ft_puthexa(va_arg(args, unsigned int), 0, count);
	else if (str == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	long int	count;
	va_list		args;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_formats(str[++i], &count, args);
		}
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
