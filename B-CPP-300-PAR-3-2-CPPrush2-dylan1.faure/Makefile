##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	Main.cpp			\
		Box.cpp				\
		GiftPaper.cpp		\
		LittlePony.cpp		\
		Object.cpp			\
		Teddy.cpp			\
		Toy.cpp				\
		Wrap.cpp		\
		ConveyorBelt.cpp

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -f

NAME		=	santa

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
