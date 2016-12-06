# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/21 10:52:04 by pde-maul          #+#    #+#              #
#    Updated: 2016/11/27 16:59:59 by pde-maul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

INC_DIR = includes

FLAG = -Wall -Werror -Wextra -I $(INC_DIR)


SRC = 	check_and_main.c \
		list_and_tab.c \
		backtraking.c \
		print_tab.c \
		error_handler.c



OBJ = $(SRC:.c=.o)

INC_DIR = includes/

SRC_DIR = srcs/

I_LIBFT = -Ilibft

LIBFT = -Llibft $(I_LIBFT) -lft

.PHONY:clean re all fclean

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@$(CC) $(FLAG) -o $(NAME) $^ $(LIBFT)
	@echo "$(NAME) is ready :)"

%.o: $(SRC_DIR)%.c
	@$(CC) $(FLAG) -o $@ -c $< $(I_LIBFT)

clean:
	@make clean -C libft
	rm -f $(OBJ)

fclean: clean
		@make fclean -C libft
	rm -f $(NAME)

re: fclean all
