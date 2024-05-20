#include "inc/push_swap.h"

void	init_stack_a(t_stack_node **a, char **argv)
{
	long n; // vai guardar o resultado
	int i;  // vai percorrer a array de numeros
	i = 0;
	while (argv[i])
	{
		if (error_syntax(argv[i])) // verificar erros de syntax
			free_erros(a);
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

static void	append_node(t_stack_node **stack, int n)
{
	t_stack_node *node;      // criar novo node para guardar o valor do novo n
	t_stack_node *last_node;
		// node para apontar para o ultimo node ao chamar a funçao find_last

	if (!*stack) // verificar se a stack é valida
		return ;
	node = malloc(sizeof(t_stack_node)); // alocar espaço para o node
	if (!node)
		return ;
	node->next = NULL; // apontar node para NULL
	node->nbr = n;     // alocar como data do node 'n'
	if (!*(stack))     // verificar se a stack está vazia ou a apontar para NULL
	{
		*stack = node;    
			// se estiver vazia atualizar o pointer da stack para node
		node->prev = NULL; // ligar o Null ao primeiro node da stack
	}
	else // caso tenha informação/data
	{
		last_node = find_last(*stack);
			// descobrir o ultimo node da stack e associar ao pointer last_node
		last_node->next = node;        // ligar o ultimo node ao novo node
		node->prev = last_node;       
			// atualizar o ultimo previous pointer do novo node
	}
}