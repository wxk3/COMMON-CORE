/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:17:32 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 16:46:02 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	if (!lst || !new)
		return ;
	if ((*lst) == NULL)
		*lst = new;
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
}
/*int	main(void)
{
	//aqui criei uma nova lista vazia 
	t_list *testlist = NULL;
	//aqui vou criar 3 nodes com a funcao ft_lstnew
	t_list *node1 = ft_lstnew("Node 1");
	t_list *node2 = ft_lstnew("Node 2");
	t_list *node3 = ft_lstnew("Node 3");

	//agora que tenho os nodes, posso chamar a funcao
	ft_lstadd_back(&testlist, node1);
	ft_lstadd_back(&testlist, node2);
	ft_lstadd_back(&testlist, node3);
	//agora vamos direcionar o pointer para o inicio da lista
	t_list *current = testlist;
	//Hora de imprimir tudo e verificar se esta tudo bem
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	//libertar a memoria
	ft_lstclear(&testlist, free);
	return (0);
}*/
