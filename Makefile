# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omar <omar@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 15:54:34 by omar              #+#    #+#              #
#    Updated: 2023/04/16 18:05:11 by omar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c \
		ft_split.c \
		utils.c \
		utils1.c \
		begin.c \
		checks.c \
		utils2.c \
		op.c \
		op1.c \
		op2.c \
		sort.c \
		sort_helpers.c \
		sort_helpers1.c \
		sort_helpers2.c \
		sort_helpers3.c \
		
		
		

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re