/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:45:41 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/27 02:20:20 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void     swap(t_stack_node **head)
{
    if (!*head || !(*head)->next)
        return (0);
    *head = (*head)->next;//O novo head é o valor que estava a seguir ao head original, por ex: A B C, o head era A e agora é B
    (*head)->prev->prev = *head;//Vai ligar o prev do meu novo head a NULL para ser o primeiro node da stack
    (*head)->prev->next = (*head)->next;//vai ligar o head original ao no que sucedia o novo head, por exemplo se fosse A B C, ia ficar B A C e esta linha ligava o A ao C.
    if ((*head)->next)
        (*head)->next->prev = (*head)->prev;
    (*head)->next = (*head)->prev;
    (*head)->prev = NULL;
}

void    sa(t_stack_node **a, bool print)
{
    swap(a);
    if (!print)
        ft_printf("sa\n");
} 