##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the lib
##

SRC =		display_help.c		\
		error_handling.c	\
		coded_message.c		\
		coding_matrix.c		\
		matrix_size.c		\
		message_matrix.c

OBJ     =       $(SRC:.c=.o)

NAME    =       lib103cipher.a

all:    $(NAME)
	cp lib103cipher.a ../
	cp 103cipher.h ../../include/

$(NAME):        $(OBJ)
	ar rc lib103cipher.a $(OBJ)

$(OBJ): $(SRC)
	gcc -c -g $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
