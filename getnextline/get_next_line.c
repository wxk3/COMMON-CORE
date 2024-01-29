/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:34:52 by gonferna          #+#    #+#             */
/*   Updated: 2024/01/29 16:54:04 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"

int     next_line(char  *buff)
{
    int i;
    
    i = 0;
    while (buff[i])
    {
        if(buff[i] == '\n')
        {   
            return (1);
        }
        i++;
    }
    return (0);
}

char    *get_next_line(int fd)
{
    char    buff[BUFFER_SIZE + 1];
    char    *line;

    if (fd < 0)
        return (NULL);
    line = NULL;   
    while (1)
    {
        int size = read(fd, buff, BUFFER_SIZE);
        buff[size] = 0;
        if (next_line(buff) || size == 0)
            break;
    }
    return (line);
}

int main()
{

    int fd = open("t.txt", O_RDONLY);
   
    printf("BUFFER_SIZE: %i, fd: %i\n", BUFFER_SIZE, fd);
    printf("line: %s", get_next_line(fd));
    return (0);
}