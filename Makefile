NAME	= libft.a

#SRC		=	$(wildcard *.c) COMMENTED OUT
SRC		=	ft_memset.c		\
		  ft_bzero.c		\
		  ft_memcpy.c		\
		  ft_memccpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_memsize.c		\
		  ft_memswap.c		\
		  ft_strlen.c		\
		  ft_strdup.c		\
		  ft_strndup.c		\
		  ft_strcpy.c		\
		  ft_strncpy.c		\
		  ft_strcat.c		\
		  ft_strncat.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strrchr.c		\
		  ft_strstr.c		\
		  ft_strnstr.c		\
		  ft_strcmp.c		\
		  ft_strncmp.c		\
		  ft_isimin.c		\
		  ft_isimax.c		\
		  ft_atoi.c			\
		  ft_isupper.c		\
		  ft_islower.c		\
		  ft_isalpha.c		\
		  ft_isdigit.c		\
		  ft_isxdigit.c		\
		  ft_isalnum.c		\
		  ft_isascii.c		\
		  ft_isprint.c		\
		  ft_isblank.c		\
		  ft_isspace.c		\
		  ft_isgraph.c		\
		  ft_toupper.c		\
		  ft_tolower.c		\
		  ft_tochar.c		\
		  ft_tostr.c		\
		  ft_memalloc.c		\
  		  ft_memdel.c		\
  		  ft_strnew.c		\
  		  ft_strdel.c		\
  		  ft_strclr.c		\
  		  ft_striter.c		\
  		  ft_striteri.c		\
  		  ft_strmap.c		\
  		  ft_strmapi.c		\
  		  ft_strequ.c		\
  		  ft_strnequ.c		\
		  ft_strsub.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_strtrim_delim.c\
		  ft_strsplit.c		\
		  ft_numlen.c		\
		  ft_strrev.c		\
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
		  ft_iscntrl.c		\
		  ft_str_is_lowercase.c \
		  ft_str_is_uppercase.c	\
		  ft_str_is_alpha.c	\
		  ft_str_is_numeric.c	\
		  ft_str_is_xnumeric.c	\
		  ft_str_is_alnum.c	\
		  ft_str_is_printable.c	\
		  ft_strlowcase.c	\
		  ft_strupcase.c	\
		  ft_strcapitalize.c	\
		  ft_strlcpy.c		\
		  ft_strcasecmp.c	\
		  ft_strncasecmp.c	\
		  ft_strcasestr.c	\
		  ft_strtok.c		\
		  ft_swap.c			\
		  ft_div_mod.c		\
		  ft_ultimate_div_mod.c	\
		  ft_factorial.c	\
		  ft_power.c		\
		  ft_fibonacci.c	\
		  ft_sqrt.c			\
		  ft_is_prime.c		\
		  ft_find_next_prime.c	\
		  ft_numlen_base.c	\
		  ft_itoa_base.c	\
		  ft_putnbr_base.c	\
		  ft_atoi_base.c	\
		  ft_arraydup.c		\
		  test.c			\
		  main.c			\
		  #FILES WITH NO NORM \
		  FT_ITOA	\
		  FT_STRTRIM	\
		  FT_STRSPLIT	\
		  FT_STRSUB	\
		  BONUS FILES NOT ADDED OR NORM
			

#OBJ		= $(SRC:.c=.o)
OBJ		= ft_memset.o		\
		  ft_bzero.o		\
		  ft_memcpy.o		\
		  ft_memccpy.o		\
		  ft_memmove.o		\
		  ft_memchr.o		\
		  ft_memcmp.o		\
		  ft_memsize.o		\
		  ft_memswap.o		\
		  ft_strlen.o		\
		  ft_strdup.o		\
		  ft_strndup.o		\
		  ft_strcpy.o		\
		  ft_strncpy.o		\
		  ft_strcat.o		\
		  ft_strncat.o		\
		  ft_strlcat.o		\
		  ft_strchr.o		\
		  ft_strrchr.o		\
		  ft_strstr.o		\
		  ft_strnstr.o		\
		  ft_strcmp.o		\
		  ft_strncmp.o		\
		  ft_isimin.o		\
		  ft_isimax.o		\
		  ft_atoi.o			\
		  ft_isupper.o		\
		  ft_islower.o		\
		  ft_isalpha.o		\
		  ft_isdigit.o		\
		  ft_isxdigit.o		\
		  ft_isalnum.o		\
		  ft_isascii.o		\
		  ft_isprint.o		\
		  ft_isblank.o		\
		  ft_isspace.o		\
		  ft_isgraph.o		\
		  ft_toupper.o		\
		  ft_tolower.o		\
		  ft_tochar.o		\
		  ft_tostr.o		\
		  ft_memalloc.o		\
  		  ft_memdel.o		\
  		  ft_strnew.o		\
  		  ft_strdel.o		\
  		  ft_strclr.o		\
  		  ft_striter.o		\
  		  ft_striteri.o		\
  		  ft_strmap.o		\
  		  ft_strmapi.o		\
  		  ft_strequ.o		\
  		  ft_strnequ.o		\
		  ft_strsub.o		\
		  ft_strjoin.o		\
		  ft_strtrim.o		\
		  ft_strtrim_delim.o\
		  ft_strsplit.o		\
		  ft_numlen.o		\
		  ft_strrev.o		\
		  ft_itoa.o		\
		  ft_putchar.o		\
		  ft_putstr.o		\
		  ft_putendl.o		\
		  ft_putnbr.o		\
		  ft_putchar_fd.o	\
		  ft_putstr_fd.o	\
		  ft_putendl_fd.o	\
		  ft_putnbr_fd.o	\
		  ft_lstnew.o		\
		  ft_lstdelone.o	\
		  ft_lstdel.o		\
		  ft_lstadd.o		\
		  ft_iscntrl.o		\
		  ft_str_is_lowercase.o \
		  ft_str_is_uppercase.o	\
		  ft_str_is_alpha.o	\
		  ft_str_is_numeric.o	\
		  ft_str_is_xnumeric.o	\
		  ft_str_is_alnum.o	\
		  ft_str_is_printable.o	\
		  ft_strlowcase.o	\
		  ft_strupcase.o	\
		  ft_strcapitalize.o	\
		  ft_strlcpy.o		\
		  ft_strcasecmp.o	\
		  ft_strncasecmp.o	\
		  ft_strcasestr.o	\
		  ft_strtok.o		\
		  ft_swap.o		\
		  ft_div_mod.o		\
		  ft_ultimate_div_mod.o	\
		  ft_factorial.o	\
		  ft_power.o	\
		  ft_fibonacci.o	\
		  ft_sqrt.o		\
		  ft_is_prime.o		\
		  ft_find_next_prime.o	\
		  ft_numlen_base.o	\
		  ft_itoa_base.o	\
		  ft_putnbr_base.o	\
		  ft_atoi_base.o	\
		  ft_arraydup.o		\
		  test.o			\
		  main.o
	

#Chosen compiler as prescribed by WTC_
CC		= gcc

#Compile flags as stipulated by 42.
CCFLAG	= -Wall -Wextra -Werror

#Additional Compilation flags
EXTRAS	= -I. -c

#This function only runs if the (OBJ) files exist and \
	are updated at runtime.
$(NAME)	: $(OBJ)
		$(CC) $(CCFLAG) $(SRC)
		ar rc $(NAME) $(OBJ) libft.h 
		ranlib $(NAME)

all		: $(NAME)

clean	:
		rm -rf $(OBJ) a.out

fclean	: clean
		rm -rf $(NAME)

re		:fclean all

.PHONY: clean fclean all re
#The above function ensures that the file is made even if \
	the files already exist in the directory.
