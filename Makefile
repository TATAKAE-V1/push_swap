# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omar <omar@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 15:54:34 by omar              #+#    #+#              #
#    Updated: 2023/03/23 17:21:52 by omar             ###   ########.fr        #
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