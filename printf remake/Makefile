# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goncaloferreira <goncaloferreira@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 15:32:42 by goncaloferr       #+#    #+#              #
#    Updated: 2023/11/19 15:51:51 by goncaloferr      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ./include
SRC = ./src
CFLAGS = -Wall -Wextra -Werror -g -I./include
CC = gcc
FLAGLIB = -rcs
RM = /bin/rm -f
LIBFT_DIR = ./libft
LIBFT = ./libft/libft.a
FT_PRINTF = ft_printpointer.c ft_puthex.c ft_utilities.c printf.c
OBJECTS = $(FT_PRINTF:.c=.o)

all: $(NAME)

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
		@echo "Linking $(NAME)"
		@cp $(LIBFT) $(NAME)
		@ar $(FLAGLIB) $(NAME) $(OBJECTS)
		@ranlib $(NAME)

$(LIBFT): $(LIBFT_DIR)
	@echo "Compiling libft"
	@$(MAKE) -C $(LIBFT_DIR)

%.o: $(SRC)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<"

clean:
	@$(MAKE) clean -C $(LIBFT_DIR)
	@$(RM) $(OBJECTS)

fclean:		clean
			@$(MAKE) fclean -C $(LIBFT_DIR)
			@$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean