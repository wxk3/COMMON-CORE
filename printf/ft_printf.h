/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:00:44 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/10 17:04:44 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
#define FT_PRINTF

#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_formats(va_list args, const char format);
int		ft_printchar(int c);
int     ft_printstr(char *str);
int     ft_pointer_printer(unsigned long long ptr);
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