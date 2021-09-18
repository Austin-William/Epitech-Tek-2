##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	my_cat.cpp		\

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -f

NAME		=	my_cat

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
