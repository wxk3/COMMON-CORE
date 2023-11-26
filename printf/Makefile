# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 15:03:13 by gonferna          #+#    #+#              #
#    Updated: 2023/11/26 15:10:52 by gonferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c ft_utilities.c ft_utilities2.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


all:		${NAME}

.c.o:
		@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		@${AR} ${NAME} ${OBJS}

clean:
		@${RM} ${OBJS}

fclean:		clean
		@${RM} ${NAME}

re:		fclean all