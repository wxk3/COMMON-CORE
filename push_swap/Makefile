# Standard
NAME				= push_swap

# Directories
LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I$(INC)
RM					= rm -f

# Source Files
MOVES_DIR			=	moves/push.c \
						moves/rev_rotate.c \
						moves/rotate.c \
						moves/sort_stacks.c \
						moves/sort_three.c \
						moves/swap.c

PUSH_SWAP_DIR		=	srcs/errors.c \
						srcs/init_a_to_b.c \
						srcs/init_b_to_a.c \
						srcs/push_swap.c \
						srcs/split.c \
						srcs/stack_init.c \
						srcs/stack_utils.c

# Concatenate all source files
SRCS 				= $(MOVES_DIR) $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRCS and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst %.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re
