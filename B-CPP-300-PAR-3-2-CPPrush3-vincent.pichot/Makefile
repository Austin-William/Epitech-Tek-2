##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	Main.cpp						\
		./src/IMonitorDisplay.cpp		\
		./src/Date.cpp					\
		./src/Cpu.cpp					\
		./src/Cpu_2.cpp					\
		./src/Cpu_3.cpp					\
		./src/User.cpp					\
		./src/Ncurses.cpp				\
		./src/System.cpp				\
		./src/Print_Cpu.cpp				\
		./src/Print_User.cpp			\
		./src/Print_Date.cpp			\
		./src/Print_Sys.cpp				\
		./src/Print_Ram.cpp				\
		./src/Monitor.cpp				\
		./src/Ram.cpp					\
		./src/Network.cpp

CC		=	g++

OBJ		=	$(SRC:.cpp=.o)

RM		=	rm -f

NAME		=	MyGKrellm

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra -Werror -lncurses -lsfml-graphics -lsfml-window -lsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean

re:	fclean all

.PHONY: all clean fclean re
