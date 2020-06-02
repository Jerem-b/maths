##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

SRC	=	main.c\
		src/help.c\
		src/error_handling.c\
		src/getting_values.c\
		src/my_free.c\
		src/derivative.c\
		src/derivative_sec.c\
		src/display.c\
		src/derivative_estimated.c


OBJ	=	$(SRC:.c=.o)

NAME	=	109titration

CC	=	gcc

CFLAGS	+=	-g

all:	$(NAME)
$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	@rm -rf src/*.o
	@rm -rf *.o
fclean:	clean
	@rm -rf $(NAME)
re:	fclean all