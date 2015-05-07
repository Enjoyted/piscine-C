CC = 	gcc
NAME = 	dicowesh
SRC =	main_dicowesh.c \
	dicowesh.c
OBJ =	$(SRC:%.c=%.o)
RM = 	rm -f
CFLAGS = -W -Wall -Werror

$(NAME):$(OBJ) 
	$(CC) $(OBJ) -o $(NAME) -Llib_src -lmy

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all