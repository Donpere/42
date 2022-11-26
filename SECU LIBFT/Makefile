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
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c




# ft_memmove.c
# ft_strlcpy.c
# ft_strlcat.c
# ft_toupper.c
# ft_tolower.c
# ft_strchr.c
# ft_strrchr.c
# ft_strncmp.c
# ft_memchr.c
# ft_memcmp.c
# ft_strnstr.c
# ft_atoi.c

# Pour les deux fonctions suivantes, vous pourrez faire appel à la fonction malloc() :
# ft_calloc.c
# ft_strdup.c

# FONCTIONS SUPPLEMENTAIRES

# ft_substr.c
# ft_strjoin.c
# ft_strtrim.c
# ft_split.c
# ft_itoa.c
# ft_strmapi.c
# ft_striteri.c
# ft_putchar_fd.c
# ft_putstr_fd.c
# ft_putendl_fd.c
# ft_putnbr_fd.c

# BONUS attention STRUCTURE : t_list

# ft_lstnew.c
# ft_lstadd_front.c
# ft_lstsize.c
# ft_lstlast.c
# ft_lstadd_back.c
# ft_lstdelone.c
# ft_lstclear.c
# ft_lstiter.c
# ft_lstmap.c


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