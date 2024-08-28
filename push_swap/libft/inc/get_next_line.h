/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:39:35 by gonferna          #+#    #+#             */
/*   Updated: 2024/08/28 17:34:10 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define MAX_FD 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*process_line(char **stash);
char	*read_from_fd(int fd);
char	*get_next_line_helper(char **stash, int fd);
char	*get_next_line_bonus(int fd);

#endif