/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 20:06:06 by gonferna          #+#    #+#             */
/*   Updated: 2023/11/18 20:11:08 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printf_putchar(char c)
{
	write (1, &c, 1);
	return (1)
}

int	printf_putstr(char *str)
{
    int	len;

    if (!str)
    {
        write (1, "(null)", 6);
        return (6);
    }
    len = ft_strlen(str); 
    write (1, str, len);
    return (len);
}

int	printf_putnbr(int nbr)
{
    char	*str;
    int		len;

    str = ft_itoa(nbr);
    len = ft_putstr(str);
    free(str);
    return (len);
}

int	putnbr_u(unsigned int nbr)
{
    char	*str;
    int		len;

    str = ft_utoa(nbr);
    len = ft_putstr(str);
    free(str);
    return (len);
}

