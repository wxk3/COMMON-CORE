/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:29 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/17 14:18:32 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	ft_memcpy(duplicate, s, ft_strlen(s) + 1);
	return (duplicate);
}
