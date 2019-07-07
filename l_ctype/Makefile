#########################################################
#	THIS IS THE MAKEFILE FOR THE LIBRARY		#
#	TITLED L_CTYPE. THIS LIBRARY RECREATES		#
#	THE STANDARD C-LIBRARY HEADER OF CTYPE.H	#
#							#
#	PROPERTY OF SIBONELO NKOSI			#
#########################################################

NAME	= l_ctype.a

SRC	=	ft_islower.c	\
		ft_isupper.c	\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isblank.c	\
		ft_isspace.c	\
		ft_isascii.c	\
		ft_isgraph.c	\
		ft_ispunct.c	\
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

#COLOURS
NOC		= \033[0m
BOLD		= \033[1m
UNDERLINE	= \033[4m
	#BLACK		= \033[1;31m
RED		= \033[1;31m
GREEN		= \033[1;32m
YELLOW		= \033[1;33m
BLUE		= \033[1;34m
MAGENTA		= \033[1,35m
	#VIOLET		= \033[1;36m
CYAN		= \033[1;36m
WHITE		= \033[1;0m

CC	=	gcc
CCFLAGS	=	-Wall -Werror -Wextra
EXTRAS	=	-c

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

$(NAME)	:
		$(CC) $(EXTRAS) $(CCFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ) l_ctype.h
		ranlib $(NAME)
		$(OUTPUT)

linux	:	
		clang $(EXTRAS) $(CCFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ) l_ctype.h
		ranlib $(NAME)
		$(OUTPUT)

all	:	$(NAME)

clean	:
		rm -rf $(OBJ) a.out
		@echo "$(YELLOW)OBJECTS CLEANED & a.out HAS BEEN DELETED$(WHITE)"

fclean	: clean
		rm -rf $(NAME) $(NAME2)
		@echo "$(RED)OBJECTS AND LIBFT.A HAVE BEEN CLEANED$(WHITE)"

re	: fclean all
