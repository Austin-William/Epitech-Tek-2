##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC_NM		=	./src/nm/main.c					\
				./src/nm/nm.c					\
				./src/nm/open_file.c			\

SRC_OBJDUMP	=	./src/objdump/main.c			\
				./src/objdump/obj.c				\
				./src/objdump/display_32.c		\
				./src/objdump/display_64.c		\

LIB			=	./lib/my/

CC			=	gcc

OBJ_NM		=	$(SRC_NM:.c=.o)

OBJ_OBJDUMP	=	$(SRC_OBJDUMP:.c=.o)

RM			=	rm -f

NAME_NM		=	my_nm

NAME_OBJDUMP	=	my_objdump

CPPFLAGS	=	-I ./include

CFLAGS		=	-Wall -Wextra

all:	$(NAME_NM) $(NAME_OBJDUMP)

nm:		$(NAME_NM)
$(NAME_NM):	$(OBJ_NM)
	$(CC) -o $(NAME_NM) $(OBJ_NM)

objdump:	$(NAME_OBJDUMP)
$(NAME_OBJDUMP): $(OBJ_OBJDUMP)
	$(CC) -o $(NAME_OBJDUMP) $(OBJ_OBJDUMP)

clean:
	$(RM) $(OBJ_NM)
	$(RM) $(OBJ_OBJDUMP)
	$(RM) $(NAME_NM)
	$(RM) $(NAME_OBJDUMP)

fclean: clean
	$(RM) *~
	$(RM) *#

re:	fclean all

.PHONY: all clean fclean re