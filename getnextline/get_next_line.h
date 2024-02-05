/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:34:52 by gonferna          #+#    #+#             */
/*   Updated: 2024/02/05 15:56:29 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>



# ifndef BUFFER_SIZE
#  define  BUFFER_SIZE 4
# endif


char    *get_next_line(int fd);
char    *ft_strjoin(char *line, char *buff);
char    *clean_buff(char *buff);


#endif