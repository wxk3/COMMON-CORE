/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 14:52:20 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/26 15:02:47 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

# define HEXLOW "0123456789abcdef"
# define HEXUP "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, long int *count);
void	ft_putstr(const char *s, long int *count);
void	ft_putpointer(unsigned long int n, long int *count);
void	ft_puthexa(unsigned int n, int lower, long int *count);
void	ft_putlonghexa(unsigned long int n, long int *count);
void	ft_putnbr(int n, long int *count);
void	ft_putunsignedint(unsigned int n, long int *count);

#endif