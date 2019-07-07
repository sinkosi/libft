NAME	= l_math.a

#SRC		=	$(wildcard *.c) COMMENTED OUT
SRC		=	ft_div_mod.c		\
			ft_factorial.c		\
			ft_fibonacci.c		\
			ft_is_prime.c		\
			ft_find_next_prime.c	\
			ft_power.c		\
			ft_sqrt.c		\
			ft_ultimate_div_mod.c	\
			ft_vector.c		\
			ft_fabs.c		\
			ft_sine.c		\
			ft_cosine.c	

OBJ		= $(SRC:.c=.o)

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

#Chosen compiler as prescribed by WTC_
CC		= gcc

#Compile flags as stipulated by 42.
CCFLAG	= -Wall -Wextra -Werror

#Additional Compilation flags
EXTRAS	= -c -I

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

#This function only runs if the (OBJ) files exist and \
	are updated at runtime.
$(NAME)	:
		$(CC) $(EXTRAS) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) l_math.h 
		ranlib $(NAME)
		$(OUTPUT)

all		: $(NAME)

linux	:
		clang $(EXTRAS) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) l_math.h
		ranlib $(NAME)
		$(OUTPUT)

clean	:
		rm -rf $(OBJ) a.out
		@echo "$(YELLOW)OBJECTS CLEANED & a.out HAS BEEN DELETED$(WHITE)"

fclean	: clean
		rm -rf $(NAME)
		@echo "$(RED)OBJECTS AND LIBFT.A HAVE BEEN CLEANED$(WHITE)"

re		:fclean all

rl		:fclean linux
.PHONY: clean fclean all re
#The above function ensures that the file is made even if \
	the files already exist in the directory.
