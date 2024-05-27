/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:02:48 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/27 02:28:00 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack_node	find_last(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next) // loop ate chegar ao fim
		stack = stack->next;
	return (stack); // retorna a posiçao do ultimo node
}

int		stack_len(t_stack_node *stack)
{
	int	count;
	
	if (!stack)
		return (0);
	count = 0;
	while (stack)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

bool	stack_sorted(t_stack_node *stack)
{
	if (!stack)
		return (1);
	while(stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (false);
		stack = stack->next;
	}
	return (true);
}