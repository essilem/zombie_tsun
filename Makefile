##
## EPITECH PROJECT, 2023
## B-CPE-200-MAR-2-1-dante-enzo.trapolino
## File description:
## Makefile
##


CC	=	gcc

SRC	=	*.c

OBJ	=	$(SRC:.c=.o)

NAME =	zombie_tsun

RM = rm -rf

all:
		$(CC) $(SRC) -o $(NAME) -g3

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re: 		fclean all
