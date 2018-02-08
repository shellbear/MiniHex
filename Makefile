##
## Shellbear Project, 2018
## Makefile
## File description:
## MiniHex
##

SRC	=	src/main.c	\
		src/hex.c	\
		src/revstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	minihex

CC	=	gcc

CFLAGS  +=	-I include/

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
