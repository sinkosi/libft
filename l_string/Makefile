NAME	= l_string.a

#SRC		=	$(wildcard *.c) COMMENTED OUT
SRC		=	ft_memset.c		\
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
		  ft_strtok.c		\

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
EXTRAS	= -c

OUTPUT	= 	@echo	"$(GREEN)$(NAME) has been created."\
			"$(BLUE)\nThis library is the intellectual property of"\
			"$(CYAN)\nSIBONELO NKOSI (SINKOSI) & WETHINKCODE_ (NPC)$(WHITE)"\

#This function only runs if the (OBJ) files exist and \
	are updated at runtime.
$(NAME)	:
		$(CC) $(EXTRAS) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) l_string.h 
		ranlib $(NAME)
		$(OUTPUT)

all		: $(NAME)

linux	:
		clang $(EXTRAS) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) l_string.h
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
