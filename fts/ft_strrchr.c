/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/10 13:23:30 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	size_t	i;

	len = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	i = len;
	while (i > 0)
	{
		if (str[i - 1] == c)
		{
			return ((char *)&str[i - 1]);
		}
		i--;
	}
	return (0);
}
