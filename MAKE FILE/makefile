#all: file1
#	cat file1 > file2

#file1:
#	echo "hello" > file1

#clean:
#	rm file1 file2



SRCS	= 	./libMath.c \

OBJS	=	$(SRCS:%.c=%.o)

PROG	=	domMath

NAME	=	domMath.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME) $(PROG)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(PROG): *.c
	gcc *.c -o $(PROG)

#clean:
#	rm *.o

fclean:		
	rm -Rf domMath $(NAME) *.o
# *.o 

re:			fclean all