/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:05:56 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/20 09:39:30 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_formats(const char *format, int i, va_list ap)
{
	if (format[i + 1] == '%')
		return (ft_putchar(format[i + 1]));
	else if (format[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (format[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (format[i + 1] == 'u')
		return (putnbr_u(va_arg(ap, unsigned int)));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
	{
		if (format[i + 1] == 'X')
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
		else
			return (ft_puthex(va_arg(ap, unsigned int), "0123456789abcdef"));
	}
	else if (format[i + 1] == 'p')
		return (ft_putstr("0x") + printpointer(va_arg(ap, void *),
				"0123456789acbdef"));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			len += ft_formats(format, i, ap);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}
