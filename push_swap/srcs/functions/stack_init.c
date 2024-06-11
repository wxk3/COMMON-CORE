/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:38:11 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/11 15:32:00 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long	ft_atol(const char *s)
	// função que vai transformar um valor em long int
{
	long result; // retorno
	int sign;    // manipulação do sinal

	result = 0;
	sign = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r' || *s == '\f'
		|| *s == '\v') // ignorar qualquer caracter em branco de formatação
		s++;
	if (*s == '-' || *s == '+') // procurar qualquer sinal
	{
		if (*s == '-') // se encontar um '-' o sign muda de valor
			sign = -1;
		s++; // caso contrario apenas segue a string
	}
	while (ft_isdigit(*s))
		// enquanto na string so estiverem digitos
		result = result * 10 + (*s++ - '0'); //é
			* 10 para criar espaço para somar o valor char o valor da subtração do valor de char por '0'
	return (result * sign);
}

static void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*last_node;

	t_stack_node *node; // criar novo node para guardar o valor do novo n
	// node para apontar para o ultimo node ao chamar a funçao find_last
	if (!stack) // verificar se a stack é valida
		return ;
	node = malloc(sizeof(t_stack_node)); // alocar espaço para o node
	if (!node)
		return ;
	node->next = NULL; // apontar node para NULL
	node->nbr = n;     // alocar como data do node 'n'
	if (!(*stack))     // verificar se a stack está vazia ou a apontar para NULL
	{
		*stack = node;
		// se estiver vazia atualizar o pointer da stack para node
		node->prev = NULL; // ligar o Null ao primeiro node da stack
	}
	else // caso tenha informação/data
	{
		last_node = find_last(*stack);
		// descobrir o ultimo node da stack e associar ao pointer last_node
		last_node->next = node; // ligar o ultimo node ao novo node
		node->prev = last_node;
		// atualizar o ultimo previous pointer do novo node
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	long n; // vai guardar o resultado
	int i;  // vai percorrer a array de numeros
	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i])) // verificar erros de syntax
			free_errors(a);
		n = ft_atol(argv[i]);
		// converter o argumento argv para long inteter
		if (n > INT_MAX || n < INT_MIN) // limitar o long int
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append_node(a, (int)n);
		i++;
	}
}

t_stack_node	*get_cheapest(t_stack_node *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(t_stack_node **stack, t_stack_node *top_node,
		char stack_name)
{
	while (*stack != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack, false);
			else
				rra(stack, false);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}
