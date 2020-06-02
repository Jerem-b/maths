##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the lib
##

SRC =	fill_struct.c\
		f.c\
		derivate.c\
		bissection_method.c\
		newton_method.c\
		secant_method.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libtorus.a

all:    $(NAME)
	cp $(NAME) ../
	cp torus.h ../../include/

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -c -g $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all