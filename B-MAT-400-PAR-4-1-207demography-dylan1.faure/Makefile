##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	Main.cpp						\
			./src/Help.cpp					\
			./src/Charisnb.cpp				\
			./src/Utilities.cpp				\
			./src/Demography.cpp			\

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -f

NAME		=	207demography

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

LDFLAGS		=	-lm

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
	$(RM) *~

re:	fclean all

.PHONY: all clean fclean re
