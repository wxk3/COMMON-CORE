/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:48:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 16:50:51 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int	main(void)
{
	t_list	*list = NULL;
	t_list	*newnode = ft_lstnew("Novo no");
	
	ft_lstadd_back(&list, newnode);
	
	t_list *current = list;
	printf("%s\n", (char *)current->content);
}*/
