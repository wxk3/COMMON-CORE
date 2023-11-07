/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:22 by goncaloferr       #+#    #+#             */
/*   Updated: 2023/11/07 17:43:13 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"

int     ft_numlength(unsigned int num)
{
    int     len;

    len = 0;
    while (num != 0)
    {
        len++;
        num = num / 10;
    }
    return (len);
}

char    *ft_uitoa(unsigned int n)
{
    int     len;
    char    *num;
    
    len = ft_numlength(n);
    num = (char *)malloc(sizeof(char) * (len + 1));
    if (!num)
        return (0);
    num[len] = '\0';
    while (n != 0)
    {
        num[len - 1] = n % 10 + 48;
        n = n / 10;
        len--;
    }
    return (num);
}
int     ft_print_unsigned(unsigned int n)
{
    int     print_length;
    char    *num;

    print_length = 0;
    if (n == 0)
        print_length += write(1, "0", 1);
    else
    {
        num = ft_uitoa(n);
        print_length += ft_printstr(num);
        free(num);
    }
    return (print_length);
}