##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	main.c\
		src/error_handling.c\
		src/display.c\
		src/fill_struct.c\
		src/mid_method.c\
		src/trap_method.c\
		src/calculus.c\
		src/simp_method.c

OBJ	=	$(SRC:.c=.o)

NAME	=	110borwein

CC	=	gcc

CFLAGS += -g  -lm

all:	$(NAME)
$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
clean:
	@rm -rf src/*.o
	@rm -rf *.o
fclean:	clean
	@rm -rf $(NAME)
re: fclean all
