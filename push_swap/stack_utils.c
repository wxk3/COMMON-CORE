/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:02:48 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/22 01:59:48 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack_node	find_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next) // loop ate chegar ao fim
		stack = stack->next;
	return (stack); // retorna a posiçao do ultimo node
}