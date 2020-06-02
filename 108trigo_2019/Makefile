##
## EPITECH PROJECT, 2019
## CPE_dante_2019
## File description:
## Makefile
##

SRC	=	main.c\
		src/error_handling.c


OBJ	=	$(SRC:.c=.o)

NAME	=	108trigo

CC	=	gcc

CFLAGS	+=	-g

all:	$(NAME)
$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	@rm -rf src/*.o
fclean:	clean
	@rm -rf $(NAME)
re:	fclean all