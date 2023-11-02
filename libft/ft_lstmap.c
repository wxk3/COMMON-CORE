/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:07:51 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 18:46:47 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	current = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&current, del);
			return (NULL);
		}
		ft_lstadd_back(&current, new);
		lst = lst->next;
	}
	return (current);
}
/*
void *duplicate_element(void *content)
{
    return ft_strdup((char *)content);
}

void free_element(void *content)
{
    free(content);
}

int main(void)
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

    printf("Antes da função:\n");
    t_list *current = lista;
    int i = 0;
    while (current != NULL)
    {
        printf("Node na posição %d: %s\n", i, (char *)current->content);
        i++;
        current = current->next;
    }

    // Use ft_lstmap para criar uma nova lista com elementos duplicados
    t_list *new_list = ft_lstmap(lista, duplicate_element, free_element);

    printf("Depois da função (nova lista):\n");
    current = new_list;
    i = 0;
    while (current != NULL)
    {
        printf("Node na posição %d: %s\n", i, (char *)current->content);
        i++;
        current = current->next;
    }

    // Limpar a nova lista
    ft_lstclear(&new_list, free_element);

    return (0);
}
*/