/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:38:09 by gonferna          #+#    #+#             */
/*   Updated: 2024/06/11 13:32:28 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	count_words(char *s, char c) // Esta funçao vai retornar o numero total de substrings de uma string
{
	int i;            // index da string
	bool inside_word; // flag que indica se estamos dentro de uma nova substring
	int count;        // contador de substrings

	i = 0;
	count = 0;
	while (s[i]) // loop ate ao final da string
	{
		inside_word = false; // predefinir a flag em falso para iniciar o loop
		while (s[i] == c) // enquanto o caracter atual é igual ao delimitador
			i++;
		while (s[i] != c && s[i]) // enquanto o caracter atual for diferente do delimitador e nao chegar ao final da string
		{
			if (!inside_word) // se nao estivermos dentro de uma substring
			{
				count++; // encontrar string
				inside_word = true; // definimos a flag como verdadeira
			}
			i++; // movemos o index para o proximo caracter
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c) // Esta função vai retornar uma nova substring
{
	static int cursor = 0; // cursor a zeros para manter o valor durante a string
	int i; // index para percurrer a nova string
	int len; // calcular o tamanho da substring a ser extraida
	char *next_word; // guardar um pointer para a nova substring

	i = 0;
	len = 0;
	while (s[cursor] == c) // Percorrer a possibilidade de estarmos em caracteres delimitadores
		cursor++;
	while ((s[cursor + len] != c) && s[cursor + len]) // Calcular o tamanho da palavra para alocar espaço  para extrair a substring
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1); // Alocar espaço para a substring a ser extraida e para 1 para o caracter nulo
	if (!next_word) // verificar se o alocamento foi valido
		return (NULL);
	while ((s[cursor] != c) && s[cursor]) // percorrer a string e copiar para a nova cada caracter
		next_word[i++] = s[cursor++];
	next_word[i] = '\0'; // igualar o ultimo caracter a nulo
	return (next_word);
}
char	**split(char *s, char c) // Esta função vai retonrar as subsstring de uma string separadas por um delimitador
{
	char **array; // array que vai ser extraido
	int i; // index para percorrer cada string do array
	int word_count; // index para percorrer o array

	i = 0;
	word_count = count_words(s, c); // igualar o word_count ao retorno da função
	if (!word_count) // verificar se é valido
		exit(1);
	array = malloc(sizeof(char *) * (size_t)(word_count + 2)); // alocar espaço para o array com o valor do word_count mais 2 slots, 1 para o caracter nulo da ultima string e outro para o valor nulo do array
	if (!array) // verificar se o alocamento foi valido
		while (array[i])
		return (NULL);
	while (word_count-- >= 0) // percorrer de forma decrescente o array
	{
		if (i == 0) // caso comece com um delimitador vamos criar a primeira string vazia
		{
			array[i] = malloc(sizeof(char)); // alocar espaço para o nulo
			if (!array[i]) // verificaçao
				return (NULL);
			array[i++][0] = '\0'; // igualar a nulo
			continue ; // continuar o programa
		}
		array[i++] = get_next_word(s, c); // copiar string a string usando a função get_next_word
	}
	array[i] = NULL; // igualar nulo no final
	return (array); // retornar
}
// int main() {
//     char s[] = "Isto e um teste";
//     char c = ' ';
//     char **result = split(s, c);

//     if (result) {
//         int i = 0;
//         while (result[i] != NULL) {
//             printf("Palavra %d: %s\n", i + 1, result[i]);
//             free(result[i]); // Libera a memória alocada para cada substring
//             i++;
//         }
//         free(result); // Libera a memória alocada para o array de substrings
//     } else {
//         printf("Erro ao dividir a string.\n");
//     }

//     return (0);
// }