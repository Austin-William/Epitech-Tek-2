##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	main.c 								\
			./src/unsold.c						\
			./src/help.c						\
			./src/charisnb.c					\

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	202unsold

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
