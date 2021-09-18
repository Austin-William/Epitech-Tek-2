##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	./hospital/SickKoala.cpp		\

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -f

NAME		=	sickkoala

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra -Werror

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
