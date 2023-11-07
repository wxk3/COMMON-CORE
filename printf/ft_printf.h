/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:21 by goncaloferr       #+#    #+#             */
/*   Updated: 2023/11/07 18:23:52 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
#define FT_PRINTF.H

#include <stdarg.h>
#include <unistd.h>

int		ft_printchar(int c);
int		ft_formats(va_list args, const char format);
int	ft_printstr(char *str);
int		ft_hex_len(unsigned int num);
void	ft_put_hex(unsigned int	num, const char format);
int		ft_printf_hex(unsigned int	num, const char format);
int	ft_print_percent(void);
int		ft_print_d_i(int n);
int     ft_print_unsigned(unsigned int n);
char    *ft_uitoa(unsigned int n);
int     ft_numlength(unsigned int num);

#endif