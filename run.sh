make -C l_ctype/ fclean && make -C l_ctype/
make -C l_string/ fclean && make -C l_string/
make -C l_math/ fclean && make -C l_math/
make -C
gcc libft.a /l_ctype/l_ctype.a
clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c
clang  main.o get_next_line.o -I libft/includes -L libft/ -lft
make -C libft/ clean
