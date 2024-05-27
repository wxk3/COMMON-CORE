/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:50:19 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/27 13:54:44 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    sort_three(t_stack_node **a)
{
    t_stack_node *biggest_node;
    
    biggest_node = find_max(*a);
    if (biggest_node == *a)
        ra(a, false);
    else if ((*a)->next == *biggest_node)
        rra(a; false);
    if ((*a)->nbr > (*a)->next->nbr)
        sa(a, false);
}
