CC = 	gcc
NAME = 	demineur
SRC =	demineur.c \
	readline.c \
	random.c
OBJ =	$(SRC:%.c=%.o)
RM = 	rm -f

$(NAME):$(OBJ) 
	$(CC) $(OBJ) -o $(NAME) -W -Wall -Werror -L. -lmy

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all