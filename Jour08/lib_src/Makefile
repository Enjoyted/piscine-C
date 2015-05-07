NAME = 	libmy
SRC =	my_getnbr.c \
	my_putchar.c \
	my_putstr.c \
	my_strcmp.c \
	my_strlen.c \
	my_strncmp.c \
	my_strstr.c \
	my_isneg.c \
	my_put_nbr.c \
	my_strcat.c \
	my_strcpy.c \
	my_strncat.c \
	my_strncpy.c \
	my_swap.c
OBJ =	$(SRC:%.c=%.o)
RM = 	rm -f

$(NAME):	$(OBJ)
		ar r $(NAME).a $(OBJ)
		ranlib $(NAME).a

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME).a

re:	fclean all