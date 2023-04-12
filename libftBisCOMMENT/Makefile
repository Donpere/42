# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: domarion <domarion@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 16:02:22 by domarion          #+#    #+#              #
#    Updated: 2023/04/11 16:48:18 by domarion         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# les NOMS suivis de = en majuscules sont des variables

SRCS	=		./ft_isalpha.c \
			./ft_isdigit.c \
			./ft_isalnum.c \
			./ft_isascii.c \
			./ft_isprint.c \
			./ft_strlen.c \
			./ft_memset.c \
			./ft_bzero.c \
			./ft_memcpy.c \
			./ft_memmove.c \
			./ft_strlcpy.c \
			./ft_strlcat.c \
			./ft_toupper.c \
			./ft_tolower.c \
			./ft_strchr.c \
			./ft_strrchr.c \
			./ft_strncmp.c \
			./ft_memchr.c \
			./ft_memcmp.c \
			./ft_strnstr.c \
			./ft_atoi.c \
			./ft_calloc.c \
			./ft_strdup.c \
			./ft_substr.c \
			./ft_strjoin.c \
			./ft_strtrim.c \
			./ft_putstr_fd.c \
			./ft_putendl_fd.c \
			./ft_putnbr_fd.c \
			./ft_putchar_fd.c \
			./ft_split.c \
			./ft_itoa.c \
			./ft_strmapi.c \
			./ft_striteri.c \



B_SRCS	=		./ft_lstnew.c \
			./ft_lstadd_front.c \
			./ft_lstsize.c \
			./ft_lstlast.c \
			./ft_lstadd_back.c \
			./ft_lstdelone.c \
			./ft_lstclear.c \
			./ft_lstiter.c \
			./ft_lstmap.c \

# pour utiliser une variable, la syntaxe est $ et parentheses : $(variable)

OBJS	=	$(SRCS:%.c=%.o)

B_OBJS	=	$(B_SRCS:%.c=%.o)

NAME	=	libft.a

# le compilateur (cc) est stocke dans une variable : 	CC
CC		=	cc

# par habitude, la liste des flags sont stockes dans la variable CFLAGS
CFLAGS	=	-Wall -Wextra -Werror

# la structure de base du MAKEFILE est : 
#							<cible> (ce que l'on veut creer) : <dependance> (ou conditions a satisfaire)
#	on fait une tabulation		<commande>			

all:		$(NAME)

# pour decomposer les etapes de compilation. gcc fait appel a un programme gnu asm :
# 1 - TRAITEMENT COMMANDES PREPROCESSEUR : option gcc -E pour une sortie .i
# option gcc -E se content de realiser les commandes preprocesseur.
# elle va supprimer les commentaires, lister les en-tete (#include), lister les structures, 
# gcc -E <nom fichier (file.c par exemple)> -o fichier.i (option -o pour lui donner un nom) 

# 2 - COMPILATION en LANGAGE ASSEMBLEUR : option gcc -S pour une sortie .s
# exemple : gcc -S main.c -> main.s

# 3 - ASSEMBLAGE (en fichiers objets) : option gcc -c pour un fichier en .o
# exemple : gcc -c main.c -> main.o

# 4 - LINKING : gcc -l bibliotheque, ou gcc sans option sauf -o si on veut specifier un nom d'exe
# (fusion des fichiers precedents et edition de liens, bibliotheques externes ou personnelles)
# exemple : gcc main.o fichier.o -o programm (on a donc realise les etapes precedentes,
# et on peut desormais utiliser les fichiers objets)

# pour l'edition de liens la commande gnu est ld

# l'option -c de gcc compile ou assemble, sans lier les fichiers

# l'option -o de gcc place la sortie de gcc (exe, object, assembled) dans un fichier specifie (-o fileName)
# si l'option -o n'est pas suivie d'un nom, gcc creera un fichier a.out par defaut

 

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $(<:%.c=%.o)

$(NAME):	$(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -Rf $(OBJS) $(B_OBJS)

fclean:		clean
	rm -Rf $(NAME)

bonus:		$(OBJS) $(B_OBJS)
	ar rc $(NAME) $(OBJS) $(B_OBJS)
	ranlib $(NAME)

# "a"r crée, modifie et extrait des fichiers à partir d'archives. 
# Une archive est un fichier unique contenant une collection d'autres fichiers dans une structure 
# qui permet de retrouver les fichiers originaux individuels (appelés membres de l'archive).
# Le contenu, le mode (permissions), l'horodate, le propriétaire et le groupe des fichiers originaux 
# sont préservés dans l'archive, et peuvent être reconstitués lors de l'extraction.

# GNU ar peut gérer des archives dont les membres ont des noms de n'importe quelle longueur,
# toutefois elle peut etre limitee par le syst (couramment a 15 caracteres)

# OPTIONS de ar :
# "rc"
# "r" Insérer les fichiers membre dans l'archive (avec remplacement). 
# tous les membres existants au préalable sont supprimés si leur nom correspond à l'un de ceux que l'on ajoute.
# Si l'un des fichiers nommés dans membre... n'existe pas, ar affiche un message d'erreur, 
# et laisse inchangé tout membre existant de l'archive qui porte ce nom.
# Par défaut, les nouveaux membres sont ajoutés à la fin du fichier, 

# "c" : Créer l'archive. 
# L'archive spécifiée est toujours créée si elle n'existait pas, quand vous demandez une mise à jour. 
# Mais un avertissement est émis à moins que vous ne spécifiiez à l'avance que vous voulez la créer, en utilisant ce modificateur.

# "ranlib" creation d'une table d'index, si l'archive n'en possede pas.
# "ar" crée un index des symboles définis dans les modules objets relogeables de l'archive quand vous spécifiez le modificateur s. 
# Une fois créé, cet index est mis à jour dans l'archive à chaque fois que ar modifie son contenu 
# (sauf dans le cas de l'opération de mise à jour q). 
# Une archive disposant d'un tel index accélère l'édition des liens avec la bibliothèque, 
# et permet aux routines de cette dernière de s'appeler mutuellement quels que soient leurs emplacements respectifs dans l'archive.

# Vous pouvez utiliser nm -s ou nm --print-armap pour lister cette table d'index. 
# Si l'archive n'en possède pas, une autre forme de ar appelée "ranlib" peut être utilisée pour n'ajouter que la table.

re:			fclean all

rebonus:	fclean bonus

# En Makefile, la directive .PHONY est utilisée pour indiquer à Make que la cible spécifiée n'est pas un fichier à construire, 
# mais plutôt une cible qui doit toujours être exécutée, même si un fichier du même nom existe déjà.

# Dans cet exemple, la cible clean est définie comme étant une cible phony. Cela signifie que lorsqu'on invoque make clean, 
# Make exécutera toujours la commande associée à la cible clean, même si un fichier nommé clean existe déjà dans le répertoire courant.

# En général, il est bon de marquer les cibles qui ne correspondent pas à des fichiers réels comme phony, 
# afin d'éviter des problèmes potentiels avec des noms de fichiers identiques et 
# de garantir que ces cibles soient toujours exécutées comme prévu.

.PHONY:		all clean fclean re bonus rebonus
