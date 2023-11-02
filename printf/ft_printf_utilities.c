/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utilities.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:22:11 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/02 16:51:54 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdio.h>

void	ft_printstr(char *str)
{
	int	i;
	
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}
// void pointer in hex format

int		ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	ft_put_hex(unsigned int	num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0', 1));
		else
		{
			if (format == 'x')
				ft_putchar_fd(num - 10 + 'a', 1);
			if (format == 'X')
				ft_putchar_fd(num - 10 + 'A', 1);
		}
	}
}

int		ft_printf_hex(unsigned int	num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return(ft_hex_len(num));
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}