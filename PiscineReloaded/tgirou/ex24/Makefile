# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tgirou <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 15:18:41 by tgirou            #+#    #+#              #
#    Updated: 2016/11/03 16:14:07 by tgirou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_PATHS = srcs
SRCS_NAMES = ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c
OBJS_PATHS = objs
CPPFLAGS = -Iincludes
LDFLAGS = -L
LDLIBS = 
NAME = libft.a
CC = clang
CFLAGS = -Werror -Wextra -Wall
OBJS_NAMES = $(SRCS_NAMES:.c=.o)
SRCS = $(addprefix $(SRCS_PATHS)/,$(SRCS_NAMES))
OBJS = $(addprefix $(OBJS_PATHS)/,$(OBJS_NAMES))

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(LDFLAGS) $(LDLIBS) $^ -o $@

$(OBJS_PATHS)%.o: $(SRCS_PATHS)%.c
	@mkdir $(OBJS_PATHS) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean: 
	rm -fv $(OBJS)
	@rmdir $(OBJS_PATHS) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

norme: 
	norminette $(SRCS)

