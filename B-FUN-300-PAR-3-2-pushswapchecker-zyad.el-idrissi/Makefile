##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	PushSwapChecker.hs			\

CC		=	ghc

RM		=	rm -f

NAME		=	pushswap_checker

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC)

clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) *.o
	$(RM) *.hi

re:	fclean all

.PHONY: all clean fclean re
