/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 21:52:40 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/27 22:09:42 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void     rev_rotate(t_stack_node **stack)
{
    t_stack_node    *last_node;
    
    if (!*stack || !(*stack)->next)
        return (NULL);
    last_node = find_last(*stack);
    last_node->prev->next = NULL;
    last_node->next = *stack;
    last_node->prev = NULL;
    *stack = last_node;
    last_node->next->prev = last_node;
}

void    rra(t_stack_node **a, bool print)
{
    rev_rotate(*a);
    if (!print)
        ft_printf("rra\n")
}

void    rrb(t_stack_node **b, bool print)
{
    rev_rotate(*b);
    if (!print)
        ft_printf("rra\n")
}

void    rrr(t_stack_node **a, t_stack_node **b, bool print)
{
    rev_rotate(*a);
    rev_rotate(*b);
    if (!print)
        ft_printf("rra\n")
}