/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:10:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/02 16:53:18 by gonferna         ###   ########.fr       */
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
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_print_percent();
	return (print_length);
}