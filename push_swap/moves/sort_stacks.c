/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 01:40:58 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/03 14:08:13 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sort_stacks(t_stack_node **a, t_stack_node **b)
{
    int     len_a;
    
    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    while (len_a-- > 3 && !stack_sorted(*a))
    {
        init_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while (*b)
    {
        init_nodes_b(*a, *b);
        move_b_to_a(a, b);
    }
    current_index(*a);
    min_on_top(a);
}