##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main.c 			\
		menger.c

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	menger

CPPFLAGS	=	-I ./include

CFLAGS		=	-std=gnu11 -Wall -Wextra

LDFLAGS		=	-L -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
