##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## Makefile
##

SRC	=	src/104intersection.c

OBJ	=	$(SRC:.c=.o)

NAME	=	104intersection

CC	=	gcc

CFLAGS += -g

LIBS += -lm -L./lib/intersection -linter -I./include

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
