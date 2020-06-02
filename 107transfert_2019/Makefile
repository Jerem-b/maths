##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	main.c\
		src/error_handling.c\
		src/get_args.c\
		src/calc.c\
		src/horner_method.c

OBJ	=	$(SRC:.c=.o)

NAME	=	107transfer

CC	=	gcc

CFLAGS += -g -lm

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	@rm -rf *.o

fclean:	clean
	@rm -rf $(NAME)

re: fclean all
