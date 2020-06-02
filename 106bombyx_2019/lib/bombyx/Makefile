##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the lib
##

SRC =	fill_struct.c\
		calc.c\
		help.c\
		error_handling.c\

OBJ     =       $(SRC:.c=.o)

NAME    =       libbombyx.a

all:    $(NAME)
	cp bombyx.h ../../include/

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -c -g $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all