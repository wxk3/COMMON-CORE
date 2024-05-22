/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:14:20 by gonferna          #+#    #+#             */
/*   Updated: 2024/05/22 01:59:48 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
