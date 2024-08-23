/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:10:12 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 17:18:19 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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
	current = ft_lstlast(lista);
	printf("O ultimo node da lista e %s\n", (char *)current->content);
}*/