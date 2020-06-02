##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compile the lib
##

SRC =		choice.c\
		cone.c\
		cylinder.c\
		display_result.c\
		error_handling.c\
		help.c\
		init_struct.c\
		my_strlen.c\
		result_coord.c\
		sphere.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libinter.a

all:    $(NAME)
	cp $(NAME) ../
	cp 104intersection.h ../../include/

$(NAME):        $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(SRC)
	gcc -c -g $(SRC) 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
