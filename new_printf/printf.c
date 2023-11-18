/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:05:56 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/18 20:04:33 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	va_list ap;
	

	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, format);
	while (format[i])
	{
		if (format[i] == "%" && ft_strchr("cspdiuxX%", format[i + 1]))
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

int		ft_formats(const char *format, int i, va_list ap)
{
	if (format[i + 1] == '%')
		return (printf_putchar(format[i + 1]));
	else if (format[i + 1] == 'c')
		return (printf_putchar(va_arg(ap, int)));
	else if (format[i + 1] == 's')
		return (printf_putstr(va_arg(ap, char *)));
	else if (format[i + 1] == 'd' || format [i + 1] == 'i')
		return (printf_putnbr(va_arg(ap, int)));
	else if (format[i + 1] == 'u')
		return (putnbr_u(va+arg(ap, unsigned int)));
	else if (format[i + 1] == 'x' || format[i + 1] == 'X')
		{
			if (format[i + 1] == 'X')
				return (ft_puthex(va_arg(ap, usigned int), "0123456789ABCDEF"));
			else
				return (ft_puthex(va_arg(ap, usigned int), "0123456789abcdef"));
		}
	else if (format[i + 1] == 'p')
		return (ft_putstr("0x") + put_pointer(va_arg(ap, void *), \
				"0123456789acbdef"));
	else
		return (0);
}