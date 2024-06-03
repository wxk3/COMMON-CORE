/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 01:40:58 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/29 13:27:53 by gonferna         ###   ########.fr       */
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
        
    }
}