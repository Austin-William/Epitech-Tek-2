##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC		=	./src/strlen.S					\
			./src/strchr.S					\
			./src/memset.S					\
			./src/memcpy.S					\
			./src/strcmp.S					\
			./src/memmove.S					\
			./src/strncmp.S

CC		=	ld

NASM	=	nasm

OBJ		=	$(SRC:.S=.o)

RM		=	rm -f

NAME		=	libasm.so

CPPFLAGS	=	-I ./include -fPIC

CFLAGS		=	-Wall -Wextra

SFLAGS		=	-f elf64

all:
		$(NASM) $(SFLAGS) ./src/strlen.S
		$(NASM) $(SFLAGS) ./src/strchr.S
		$(NASM) $(SFLAGS) ./src/memset.S
		$(NASM) $(SFLAGS) ./src/memcpy.S
		$(NASM) $(SFLAGS) ./src/strcmp.S
		$(NASM) $(SFLAGS) ./src/memmove.S
		$(NASM) $(SFLAGS) ./src/strncmp.S
		$(CC) -shared -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

fclean: clean
	$(RM) *~
	$(RM) *#

re:	fclean all

.PHONY: all clean fclean re