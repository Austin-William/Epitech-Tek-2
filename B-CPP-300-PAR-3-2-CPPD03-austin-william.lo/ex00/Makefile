##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	string.c

OBJ		=	$(SRC:.c=.o)

RM		=	rm -f

NAME		=	libstring.a

CPPFLAGS	=	-I ./include

CFLAGS		=	-std=gnu11 -Wall -Wextra

LDFLAGS		=	-L. -lstring

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) *.o

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
