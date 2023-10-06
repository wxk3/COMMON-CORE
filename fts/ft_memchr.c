/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:42:31 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/06 17:37:53 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memchr(const void *arr, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s) [i] == (unsigned char)c)
        {
            return ((void *)s + i);
        }
        i++;
    }
    return (NULL);
}
