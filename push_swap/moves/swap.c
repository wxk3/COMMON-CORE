/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:45:41 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/07 16:52:27 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void     swap(t_stack_node **head)
{
    if (!*head || !(*head)->next)
        return;
    *head = (*head)->next;//O novo head é o valor que estava a seguir ao head original, por ex: A B C, o head era A e agora é B
    (*head)->prev->prev = *head;//Vai ligar o prev do meu novo head a A, porque este vai passar a antecede lo
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

void    sb(t_stack_node **b, bool print)
{
    swap(b);
    if (!print)
        ft_printf("sb\n");
}

void    ss(t_stack_node **a, t_stack_node **b, bool print)
{
    swap(a);
    swap(b);
    if (!print)
        ft_printf("ss\n");
}