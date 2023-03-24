# target (cible, le gateau): pre-quisities (dependances, les ingredients necessaire au gateau)
#		recipe (regle, la recette pour faire le gateau)

#all: file1
#	cat file1 > file2

#file1:
#	echo "hello" > file1

#clean:
#	rm file1 file2


## ARGUMENTS
##############################################

SRCS	= 	./libMath.c \

OBJS	=	$(SRCS:%.c=%.o)

PROG	=	domMath

NAME	=	domMath.a

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

# VARIANTE :
# on peut se passer des types de fichier (.c, .o, etc)
# et automatiser les suffixes de destination
# en utilisant la fonction "addsuffix" :
#				SRCS	=	main\
							domath\
				OBJS	=	$(addsuffix .o, $(SRC))

## RULES
##############################################

# %.o :	%.c est une regle generique -> pour obtenir %(n'importe quel fichier) .o : utiliser %(n'importe quel fichier) .c
# dans la commande on retrouve des "variables automatiques :
# &<	représente le nom du fichier sans suffixe (ici n'importe quel fichier .c)
# $@	représente la liste des cibles (ici n'importe quel fichier .o)
# $ˆ	représente la liste des dépendances
# $*	représente la liste des dépendances
# $?	représente la liste des dépendances plus récentes que la cible

all:	$(NAME) $(PROG)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(PROG): *.c
	gcc *.c -o $(PROG)

clean:	
	rm -Rf $(OBJS)

fclean:		clean
	rm -Rf domMath $(NAME) *.o

re:			fclean all

.PHONY:		all clean fclean re