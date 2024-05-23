# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytsyrend <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 18:55:46 by ytsyrend          #+#    #+#              #
#    Updated: 2024/01/18 18:55:53 by ytsyrend         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# Standard
NAME				= push_swap

# Compiler and CFlags
CC					= gcc
CFLAGS				= -Wall -Werror -Wextra -I
RM					= rm -f

# Directories
LIBFT				= ./libft/libft.a
INC					= include/
SRC_DIR				= srcs/
OBJ_DIR				= obj/

PUSH_SWAP = $(SRC_DIR)push_swap.c \
	$(SRC_DIR)init_stack.c \
	$(SRC_DIR)handle_error.c 

UTILS = $(SRC_DIR)utils/list_utils.c \
				$(SRC_DIR)utils/stack_utils.c \
				$(SRC_DIR)utils/split.c

OPERATIONS = $(SRC_DIR)operations/swap.c \
						 $(SRC_DIR)operations/push.c \
						 $(SRC_DIR)operations/rotate.c \
						 $(SRC_DIR)operations/rev_rotate.c \

TURK_ALG = $(SRC_DIR)turk_algorithm/sort_control.c \
					 $(SRC_DIR)turk_algorithm/sort_stacks.c  \
					 $(SRC_DIR)turk_algorithm/init_a_to_b.c  \
					 $(SRC_DIR)turk_algorithm/init_b_to_a.c  \
					 $(SRC_DIR)turk_algorithm/prepare_for_push.c  \

SRCS 				= $(OPERATIONS) $(UTILS) $(PUSH_SWAP) $(TURK_ALG) 

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

# Build rules
start:				
					@make all

$(LIBFT):
					@make -C ./libft

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT)
					@$(CC) $(CFLAGS) $(INC) $(OBJ) $(LIBFT) -o $(NAME)

# Compile object files from source files
$(OBJ_DIR)%.o:		$(SRC_DIR)%.c 
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
					@$(RM) -r $(OBJ_DIR)
					@make clean -C ./libft

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(LIBFT)

re: 				fclean all

# Phony targets represent actions not files
.PHONY: 			start all clean fclean re
