##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

NAME    = zomb

CC    = gcc

CSFML	= -l csfml-audio -l csfml-graphics -l csfml-network

CSFML1	= -l csfml-system -l csfml-window

RM    = rm -f

SRC	=	src/my_putchar.c	\
		src/main.c \
		src/str.c \
		src/game.c \
		src/play.c \

OBJS    = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CSFML) $(CSFML1) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
