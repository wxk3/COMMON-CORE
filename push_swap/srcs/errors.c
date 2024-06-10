/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:14:20 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/10 12:56:02 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	error_syntax(char *str_n)
{
//verificar se o primeiro caracter é digito ou sinal, se nao for da erro 1
	if (!(*str_n == '+' || *str_n == '-' || (*str_n >= '0' && *str_n <= '9')))
		return (1);
//verificar se o primeiro caracter for sinal, se o segundo é digito ou nao e retorna erro 1
	if ((*str_n == '+' || *str_n == '-') && !(str_n[1] >= '0' && str_n[1] <= '9'))
        return (1);
    while (*++str_n)
    {
//caso as anteriores sejam validas, verificar se ate ao fim da string sao digitos
        if (!(*str_n >= '0' && *str_n <= '9'))
            return (1);
    }
    return (0);
}

int error_duplicate(t_stack_node *a, int n)
{
    if (!a)//check stack
        return (0);
    while (a)
    {
        if (a->nbr == n)//se o conteudo da stack é igual a n
            return (1);
    a = a->next;//proximo
    }
    return (0);
}

void    free_stack(t_stack_node **stack)
{
    t_stack_node *tmp;
    t_stack_node *current;

    if (!stack)
        return;
    current = *stack;
    while (current)
    {
        tmp = current->next;
        current->nbr = 0;
        free(current);
        current = tmp;
    }
    *stack = NULL;
}

void    free_errors(t_stack_node **a)
{
    free_stack(a);
    ft_printf("Error\n");
    exit(1);
}