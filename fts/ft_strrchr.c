/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/09 14:28:21 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (size_t i = len; i > 0; i--)
	{
		if (str[i - 1] == c)
		{
			return (&str[i - 1]);
		}
	}
	return (0);
}
