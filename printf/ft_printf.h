/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:44:21 by goncaloferr       #+#    #+#             */
/*   Updated: 2023/11/08 20:01:52 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
#define FT_PRINTF.H

#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int     ft_printstr(char *str);
int     ft_pointer_printer(unsigned long long ptr)
int		ft_print_d_i(int n);
int     ft_print_unsigned(unsigned int n);
int		ft_printf_hex(unsigned int	num, const char format);
int     ft_print_percent(void);

int     ft_ptr_len(uintptr_t num);
void    ft_put_ptr(uintptr_t num);
int     ft_numlength(unsigned int num);
void	ft_put_hex(unsigned int	num, const char format);
char    *ft_uitoa(unsigned int n);
int		ft_hex_len(unsigned int num);

#endif