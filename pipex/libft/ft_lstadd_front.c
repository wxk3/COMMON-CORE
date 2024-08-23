/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:59:24 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 18:29:08 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list *lista = NULL;
	
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");
	t_list *node4 = ft_lstnew("Node 4");
	
	ft_lstadd_back(&lista, node1);
	ft_lstadd_back(&lista, node2);
	ft_lstadd_back(&lista, node3);
	ft_lstadd_front(&lista, node4);
	
	t_list	*current = lista;
	int	i = 0;
	while (current != NULL)
	{
		printf("Node na posicao %d: %s\n", i, (char *)current->content);
		i++;
		current = current->next;
	}
}*/
