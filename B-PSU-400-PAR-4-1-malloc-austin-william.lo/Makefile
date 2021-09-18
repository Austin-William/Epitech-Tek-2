##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./src/malloc.c		\
		./src/free.c		\
		./src/calloc.c		\
		./src/realloc.c		\
		./src/reallocarray.c

LIB		=	./lib/my/

CC		=	gcc

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	libmy_malloc.so

CPPFLAGS	=	-I ./include -fPIC

CFLAGS		=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -shared -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
		$(RM) *~
		$(RM) *#

re:	fclean all

.PHONY: all clean fclean re