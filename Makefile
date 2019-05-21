NAME	= libft.a

SRC		=	*.c

OBJ		= $(SRC:.c=.o)
CC		= gcc
CCFLAG	= -Wall -Wextra -Werror

$(NAME)	: $(OBJ)
		$(CC) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) libft.h
		ranlib $(NAME)

all		: $(NAME)

clean	:
		rm -rf $(OBJ) $(NAME) a.out

fclean	: clean
		rm -rf $(NAME)

re		:fclean all
