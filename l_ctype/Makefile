#########################################################
#	THIS IS THE MAKEFILE FOR THE LIBRARY		#
#	TITLED L_CTYPE. THIS LIBRARY RECREATES		#
#	THE STANDARD C-LIBRARY HEADER OF CTYPE.H	#
#							#
#	PROPERTY OF SIBONELO NKOSI			#
#########################################################

NAME	= l_ctype.a
NAME2	= l_ctype.so

SRC	=	ft_islower.c	\
		ft_isupper.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isblank.c	\
		ft_isspace.c	\
		ft_isascii.c	\
		ft_isgraph.c	\
		ft_iscntrl.c	\
		ft_isprint.c	\
		ft_isxdigit.c	\
		ft_isimax.c	\
		ft_isimin.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_tochar.c	\
		ft_tostr.c	\
		ft_str_is_lowercase.c	\
		ft_str_is_uppercase.c	\
		ft_str_is_alpha.c	\
		ft_str_is_numeric.c	\
		ft_str_is_xnumeric.c	\
		ft_str_is_alnum.c	\
		ft_str_is_printable.c	\

OBJ	=	$(SRC:%.c=%.o)

CC	=	gcc
CCFLAGS	=	-Wall -Werror -Wextra
EXTRAS	=	-I -c

$(NAME)	:
		$(CC) $(CCFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ) l_ctype.h
		ranlib $(NAME)
		@echo "LIBRARY L_CTYPE.A HAS BEEN CREATED"

$(NAME2):
		$(CC) $(CCFLAGS) $(SRC)
		ar rc $(NAME2) $(OBJ) l_ctype.h
		ranlib $(NAME2)
		@echo "LIBRARY L_CTYPE.A HAS BEEN CREATED"

all	:	$(NAME)

linux	:	$(NAME2)

clean	:
		rm -rf $(OBJ) a.out
	
fclean	:
		clean
		rm -rf $(NAME)

re	:
		fclean all
