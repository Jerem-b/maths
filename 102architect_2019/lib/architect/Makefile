##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the architect lib
##

SRC =	new_matrix.c	\
		matrix.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libarchitect.a

all:    $(NAME)
	cp libarchitect.a ../
	cp architect.h ../../include/
	cp struct.h ../../include/

$(NAME):        $(OBJ)
	ar rc libarchitect.a *.o

$(OBJ): $(SRC)
	gcc -c $^

clean:
	rm -f $(OBJ)
	rm -f *.o
re:
	clean all
