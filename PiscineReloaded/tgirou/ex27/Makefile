# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgirou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:18:41 by tgirou            #+#    #+#              #
#    Updated: 2016/11/05 10:33:20 by tgirou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -Iincludes
_SRCS = ft_display_file.c 
OBJS = $(_SRCS:.c=.o)
SRCS = $(patsubst %, srcs/%, $(_SRCS)) 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norme: 
	norminette $(SRCS)

