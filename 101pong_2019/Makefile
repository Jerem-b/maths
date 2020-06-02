##
## EPITECH PROJECT, 2019
## CPool_rush2_2019
## File description:
## Makefile
##

SRC	=	101pong.c \
		isneg.c	\
		rmletters.c	\
		isdigit.c

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

CC	=	gcc

all:	$(NAME)

$(NAME): $(OBJ)
	@echo "(๑ᵕ◡ᵕ)(ˆ◡ˆc) Compiling $(NAME). PLEASE HOLD ON"
	@$(CC) -o $(NAME) $(OBJ) -lm -Istruct.h -g
	rm -rf *.o
	@echo "🦧  MAKE $(NAME)"

clean:
	@rm -rf vgcore.*
	@rm -rf *.o
	@echo "🚫  CLEAN .o and vgcore"

fclean:	clean
	@rm -f $(NAME)
	@echo "🚫  FCLEAN $(NAME)"

re:
	@echo "re"
