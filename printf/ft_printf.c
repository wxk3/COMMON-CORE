/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:10:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/08 19:56:47 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

//%c
int		ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_formats(va_list args, const char format)
{
	int		print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_pointer_printer(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_print_d_i(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_print_percent();
	return (print_length);
}

int		ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_formats(args, str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}