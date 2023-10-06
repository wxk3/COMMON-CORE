/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:47:58 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/06 17:29:33 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	if (n > 0)
	{
		while (i < n - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main(void)
// {
//     char src[] = "Hello world!";
//     char dest[20];

//     ft_strlcpy(dest, src, 10);

//     printf("%s\n", dest);
// }