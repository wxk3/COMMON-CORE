/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:38:09 by gonferna          #+#    #+#             */
/*   Updated: 2024/08/28 17:40:14 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	count_words(char *s, char c)
{
	int		i;
	bool	inside_word;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		inside_word = false;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			if (!inside_word)
			{
				count++;
				inside_word = true;
			}
			i++;
		}
	}
	return (count);
}

static char	*get_next_word(char *s, char c)

{
	static int	cursor = 0;
	int			i;
	int			len;
	char		*next_word;

	i = 0;
	len = 0;
	while (s[cursor] == c)
		cursor++;
	while ((s[cursor + len] != c) && s[cursor + len])
		++len;
	next_word = malloc((size_t)len * sizeof(char) + 1);
	if (!next_word)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_word[i++] = s[cursor++];
	next_word[i] = '\0';
	return (next_word);
}

char	**split(char *s, char c)
{
	int		words_count;
	char	**result_array;
	int		i;

	i = 0;
	words_count = count_words(s, c);
	if (!words_count)
		exit(1);
	result_array = malloc(sizeof(char *) * (size_t)(words_count + 2));
	if (!result_array)
		return (NULL);
	while (words_count-- >= 0)
	{
		if (i == 0)
		{
			result_array[i] = malloc(sizeof(char));
			if (!result_array[i])
				return (NULL);
			result_array[i++][0] = '\0';
			continue ;
		}
		result_array[i++] = get_next_word(s, c);
	}
	result_array[i] = NULL;
	return (result_array);
}

void	free_split(char **argv)
{
	int		i;

	i = 0;
	if (argv)
	{
		while (argv[i])
		{
			free(argv[i]);
			i++;
		}
		free(argv);
	}
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