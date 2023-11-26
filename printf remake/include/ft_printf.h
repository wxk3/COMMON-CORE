/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:55:34 by goncaloferr       #+#    #+#             */
/*   Updated: 2023/11/20 09:36:54 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	putnbr_u(unsigned int nbr);
int	ft_printf(const char *format, ...);
int	printpointer(void *nbr, char *base);
int	ft_puthex(unsigned int nbr, char *base);

#endif