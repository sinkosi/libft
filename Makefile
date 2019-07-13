NAME	= libft.a

CTYPE		=	ft_islower.c	\
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

STRING		=	ft_memset.c		\
		  ft_bzero.c		\
		  ft_memalloc.c		\
		  ft_memdel.c		\
		  ft_memcpy.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_strlen.c		\
		  ft_strcpy.c		\
		  ft_strncpy.c		\
		  ft_strlcpy.c		\
		  ft_strcat.c		\
		  ft_strncat.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strrchr.c		\
		  ft_strstr.c		\
		  ft_strnstr.c		\
		  ft_strcasestr.c	\
		  ft_strcmp.c		\
		  ft_strncmp.c		\
		  ft_strcasecmp.c	\
		  ft_strncasecmp.c	\
  		  ft_strnew.c		\
  		  ft_strdel.c		\
  		  ft_strclr.c		\
 		  ft_strdup.c		\
		  ft_strndup.c		\
		  ft_strequ.c		\
  		  ft_strnequ.c		\
		  ft_strreverse.c	\
		  ft_strspn.c		\
		  ft_strcspn.c		\

MATH		= 	ft_div_mod.c		\
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


#SRC		=	$(wildcard *.c) #COMMENTED OUT
SRC		=	ft_atoi.c			\
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

OBJ_A		=	$(CTYPE:.c=.o)
OBJ_B		=	$(STRING:.c=.o)
OBJ_C		=	$(MATH:.c=.o)
OBJ_D		=	$(SRC:.c=.o) 
       			

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
		$(CC) $(EXTRAS) $(CCFLAG) $(CTYPE) $(STRING) $(MATH) $(SRC)
		ar rc $(NAME) $(OBJ_A) $(OBJ_B) $(OBJ_C) $(OBJ_D) libft.h 
		ranlib $(NAME)
		$(OUTPUT)

all		: $(NAME)

linux	:
		clang $(EXTRAS) $(CCFLAG) $(CTYPE) $(STRING) $(MATH) $(SRC)
		ar rc $(NAME) $(OBJ_A) $(OBJ_B) $(OBJ_C) $(OBJ_D) libft.h
		ranlib $(NAME)
		$(OUTPUT)

clean	:
		rm -rf $(OBJ_A) $(OBJ_B) $(OBJ_C) $(OBJ_D) a.out
		@echo "$(YELLOW)OBJECTS CLEANED & a.out HAS BEEN DELETED$(WHITE)"

fclean	: clean
		rm -rf $(NAME)
		@echo "$(RED)OBJECTS AND LIBFT.A HAVE BEEN CLEANED$(WHITE)"

re		:fclean all

rl		:fclean linux
.PHONY: clean fclean all re
#The above function ensures that the file is made even if \
	the files already exist in the directory.
