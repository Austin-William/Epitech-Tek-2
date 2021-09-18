##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	DoOp.hs			\

CC		=	ghci

RM		=	rm -f

NAME		=	doop

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	$(RM) $(NAME)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
