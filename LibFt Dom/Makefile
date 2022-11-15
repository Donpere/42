# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: domarion <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 09:45:03 by domarion          #+#    #+#              #
#    Updated: 2022/11/11 09:46:05 by domarion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wextra -Wall -Werror
NAME = libft.a

SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c


OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $< 

$(NAME) : $(OBJ)
	ar -rsv $(NAME) $(OBJ)


clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a 

re:	fclean all


.PHONY : all clean fclean re