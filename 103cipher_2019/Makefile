##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	103cipher

CC	=	gcc

CFLAGS += -g

CRITFLAGS += --verbose --coverage

LIBS += -L./lib/my -l103cipher -I./include

all:	$(NAME)

$(NAME):	$(OBJ)
	@echo "Compiling $(NAME). PLEASE HOLD ON"
	@$(CC) -o $(NAME) $(OBJ) $(LIBS) $(CFLAGS)
	@echo "🦧  MAKE $(NAME)"

clean:
	@rm -rf *.o
	@echo "🚫  CLEAN .o"

fclean:	clean
	@rm -rf $(NAME)
	@echo "🚫  FCLEAN $(NAME)"

re: fclean all

unit:
	@gcc -o Test_criterion criterion_test/test.c $(SRC) $(CRITFLAGS)
	@rm -rf *.gcno

