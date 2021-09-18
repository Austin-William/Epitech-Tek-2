##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	main.c 								\
			./src/help.c						\
			./src/my_str_to_word_array.c		\
			./src/pair.c						\
			./src/four.c						\
			./src/full.c						\
			./src/straight.c					\
			./src/yahtzee.c						\
			./src/three.c						\
			./src/calcul.c						\
			./src/yams.c						\
			./src/charisnb.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	201yams

CPPFLAGS	=	-I ./include

CFLAGS		=	-std=gnu11 -Wall -Wextra

LDFLAGS		=	-lm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
