/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:34:52 by gonferna          #+#    #+#             */
/*   Updated: 2024/02/16 19:09:14 by goncaloferr      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	next_line(char *buff)
{
	int	i;
	int	is_line;
	int	j;

	j = 0;
	i = 0;
	is_line = 0;
	while (buff[i])
	{
		if (is_line)
			buff[j++] = buff[i];
		if (buff[i] == '\n')
			is_line = 1;
		buff[i] = '\0';
		i++;
	}
	return (is_line);
}

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*line;
	int			size;

	if (fd < 0 || BUFFER_SIZE < 1 || fd >= FOPEN_MAX)
		return (clean_buff(buff));
	line = NULL;
	size = 1;
	while (size > 0)
	{
		if (buff[0] == '\0')
			size = read(fd, buff, BUFFER_SIZE);
		if (size == -1)
		{
			free(line);
			return (clean_buff(buff));
		}
		else if (size == 0)
			break ;
		line = ft_strjoin(line, buff);
		if (next_line(buff))
			break ;
	}
	return (line);
}

// int	main(void)
// {
// 	int fd = open("t.txt", O_RDONLY);

// 	printf("BUFFER_SIZE: %i, fd: %i\n", BUFFER_SIZE, fd);
// 	printf("line: %s", get_next_line(fd));
// 	printf("line: %s", get_next_line(fd));
// 	printf("line: %s", get_next_line(fd));
// 	return (0);
// }