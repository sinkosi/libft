NAME	= libft.a

#include ./l_ctype/Makefile

#CTYPE		=	./l_ctype/make Makefile linux
#./l_ctype/l_ctype.h\
		./l_ctype/ft_islower.c	\
		./l_ctype/ft_isupper.c	\
		./l_ctype/ft_isalpha.c	\
		./l_ctype/ft_isdigit.c	\
		./l_ctype/ft_isalnum.c	\
		./l_ctype/ft_isblank.c	\
		./l_ctype/ft_isspace.c	\
		./l_ctype/ft_isascii.c	\
		./l_ctype/ft_isgraph.c	\
		./l_ctype/ft_ispunct.c	\
		./l_ctype/ft_iscntrl.c	\
		./l_ctype/ft_isprint.c	\
		./l_ctype/ft_isxdigit.c	\
		./l_ctype/ft_isimax.c	\
		./l_ctype/ft_isimin.c	\
		./l_ctype/ft_toupper.c	\
		./l_ctype/ft_tolower.c	\
		./l_ctype/ft_tochar.c	\
		./l_ctype/ft_tostr.c	\
		./l_ctype/ft_str_is_lowercase.c	\
		./l_ctype/ft_str_is_uppercase.c	\
		./l_ctype/ft_str_is_alpha.c	\
		./l_ctype/ft_str_is_numeric.c	\
		./l_ctype/ft_str_is_xnumeric.c	\
		./l_ctype/ft_str_is_alnum.c	\
		./l_ctype/ft_str_is_printable.c	\

#SRC		=	$(wildcard *.c) COMMENTED OUT
SRC		=			  ft_atoi.c			\
  		  ft_striter.c		\
  		  ft_striteri.c		\
  		  ft_strmap.c		\
  		  ft_strmapi.c		\
		  ft_strsub.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_strtrim_delim.c\
		  ft_strsplit.c		\
		  ft_numlen.c		\
		  ft_itoa.c			\
		  ft_putchar.c		\
		  ft_putstr.c		\
		  ft_putendl.c		\
		  ft_putnbr.c		\
		  ft_putchar_fd.c	\
		  ft_putstr_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\
		  ft_lstnew.c		\
		  ft_lstdelone.c	\
		  ft_lstdel.c		\
		  ft_lstadd.c		\
		  ft_lstiter.c		\
		  ft_lstmap.c		\
		  ft_strlowcase.c	\
		  ft_strupcase.c	\
		  ft_strcapitalize.c	\
		  ft_swap.c			\
		  ft_numlen_base.c	\
		  ft_itoa_base.c	\
		  ft_putnbr_base.c	\
		  ft_atoi_base.c	\
		  ft_arraydup.c		\
		  test.c			\
		  ft_atoi_base.c	\
		  #main.c			\

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
		$(CC) $(EXTRAS) $(CCFLAG) $(CTYPE) $(SRC)
		ar rc $(NAME) $(OBJ) libft.h 
		ranlib $(NAME)
		$(OUTPUT)

all		: $(NAME)

linux	:
		clang $(EXTRAS) $(CCFLAG) $(CTYPE) $(SRC)
		ar rc $(NAME) $(OBJ) libft.h
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
