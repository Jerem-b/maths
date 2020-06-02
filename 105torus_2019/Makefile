##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	src/test_moulinette.c

OBJ	=	$(SRC:.c=.o)

NAME	=	105torus

CC	=	gcc

CFLAGS += -g

LIBS += -L./lib/torus -ltorus -I./include -lm

all:	$(NAME)
$(NAME):	$(OBJ)
	@$(CC) -o $(NAME) $(OBJ) $(LIBS) $(CFLAGS)
clean:
	@rm -rf *.o
fclean:	clean
	@rm -rf $(NAME)
re: fclean all
