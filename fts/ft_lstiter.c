/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:03:06 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/26 18:39:46 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst | !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_element(void *content)
{
    printf("Element: %s\n", (char *)content);
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

    // Use ft_lstiter para imprimir cada elemento
    ft_lstiter(lista, print_element);

    return (0);
}*/
