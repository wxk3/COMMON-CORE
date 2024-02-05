/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:34:52 by gonferna          #+#    #+#             */
/*   Updated: 2024/02/05 15:56:22 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int ft_strlen(char *string)
{
    int i;

    i = 0;
    if (!string)
        return (0);
    while(string[i])
    {
        if (string[i] == '\n')
        {
            return (i + 1);
        }
        i++;
    }
    return (i);
}

char    *ft_strjoin(char *line, char *buff)
{
    char *new_line;
    int i;
    int d;
    
    new_line = malloc(ft_strlen(buff) + ft_strlen(line) + 1);
    if (!new_line)
        return (NULL);
    i = 0;
    while(line && line[i])
    {
        new_line[i] = line[i];
        i++;
    }
    d = 0;
    while(buff[d])
    {
        new_line[i++] = buff[d];     
        if (buff[d++] == '\n')
            break;
    }
    new_line[i] = '\0';
    free(line);
    return (new_line);
}

char    *clean_buff(char *buff)
{
    size_t  i;
    
    i = 0;
    while(buff[i] != '\0')
    {
        buff[i] = '\0';
        i++;
    }
    return (NULL);
}