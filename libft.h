/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/25 12:24:38 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "./l_ctype/l_ctype.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** FT_STRLEN - This function returns the length of the string input
*/
size_t			ft_strlen(const char *c);

/*
** FT_ATOI - This function reads a string and returns it as an integer
*/
int				ft_atoi(const char *nptr);

/*
** FT_STRCPY - This function copies the source string and applies it to a
** destination string, including the '\0' terminator char.
*/
char			*ft_strcpy(char *dst, const char *src);

/*
** FT_STRNCPY - This function copies at most len characters from src to dst.
** If src is less than len char long, the remainder of dst is filled with
** '\0' characters. Otherwise dst is not determined.
*/
char			*ft_strncpy(char *dst, const char *src, size_t len);

/*
** FT_STRCMP - This function compares characters in a string lexicographically
** The function returns 0 if the strings are equal, and non-zero if they are
** not equal.
*/
int				ft_strcmp(const char *s1, const char *s2);

/*
**FT_STRNCMP - This function compares characters in a string up to n charac-
** ters. The function returns 0 if the strings are equalm and non-zero if
** they are not equal.
*/
int				ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** FT_STRCAT - This function will append a copy of a null terminated string
** s2 to the end of the null terminated string s1. Then it will add a null
** terminator string '\0'.
*/
char			*ft_strcat(char *dst, const char *src);

/*
** FT_STRNCAT - This function wiil append not more that n characters from
** string s2 to the end of string s1 and then add the termiantor character
** '\0'. It will return the pointer s1.
*/
char			*ft_strncat(char *dst, const char *src, size_t n);

/*
** FT_STRLCAT - This function will append string src to string dst if the
** BUFFER can guarantee NUL-termination and there is room to do. Room for
** NUL should be included in dstsize.
*/
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
** FT_STRCHR - This function locates the first occurence of c in the string
** pointed to by s. The function returns a pointer to the located charac-
** ter. It can also find the '\0' character.
*/
char			*ft_strchr(const char *s, int c);

/*
** FT_STRRCHR - This function locates the last occurence of c in the string
** pointed to by s. The function returns a pointer to the located charac-
** ter. It can also fins the '\0' character.
*/
char			*ft_strrchr(const char *s, int c);

/*
** FT_STRSTR - This function locates the first occurrence of the null-
** terminated string 'needle' in the null terminated string 'haystack'
** If needle is empty, haystack is returned. If no needle is found then
** NULL us returned. If found a pointer to first occurrence is returned.
*/
char			*ft_strstr(const char *haystack, const char *needle);

/*
** FT_STRNSTR - This function locates the first occurrence of the string
** 'needle' in the string' haystack up to n characters. It returns hay-
** stack if needle empty. If no needle is found it returns NULL, if
** found it will return a pointer to the occurence of needle.
*/
char			*ft_strnstr(const char *haystack, const char *needle,
				size_t len);

/*
** FT_STRDUP - This function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it. If in-
** sufficient memory is available, NULL is returned.
*/
char			*ft_strdup(const char *s1);

/*
** FT_STRNDUP - This function allocates sufficient memory for a copy
** of the string s1. The function copies at most n characters from
** the string s1 always NUL terminating the copied string
*/
char			*ft_strndup(const char *s1, size_t n);

/*
** FT_MEMSET - This funtion writes len bytes of value c (converted to an
** unsigned char) to the string b. The memset() function returns its
** first argument
*/
void			*ft_memset(void *b, int c, size_t len);

/*
** FT_BZERO - This function writes zeroes to a byte string. It writes n
** zeroed bytes to the string s. If n is zero, ft_bzero() does
** nothing
*/
void			*ft_bzero(void *s, size_t n);

/*
** FT_MEMCPY - This function will copy memory area. It copies n bytes from
** memory area src to memory area dst. The ft_memcpy() function returns
** the original value of dst.
*/
void			*ft_memcpy(void *dst, const void *src, size_t n);

/*
** FT_MEMCCPY - This function will copy a byte string until it finds a char.
** The memccpy() function copies bytes from src to dst. If the char c
** occurs in the string src. The copy stops and a pointer is returned.
*/
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
** FT_MEMSIZE - This function will take a parameter as an argument and
** return its allocated bytes as an unsigned int.
*/
unsigned int	ft_memsize(void *s1);

/*
** FT_MEMSWAP - This function will take two paramaters and switch their
** values. It will take s1 and s2, and return the values in such a way
** that s1 will have the value of s2, and s2 will have the value of s1.
*/
void			ft_memswap(void *s1, void *s2);

/*
** FT_MEMMOVE - This function will copy a byte string. It takes len bytes
** from src to dst. The strings may overlap. The function returns the
** original value of dst.
*/
void			*ft_memmove(void *dst, const void *src, size_t len);

/*
** FT_MEMCHR - This function will locate the first occurence of c in string
** s. The function returns a pointer to the byte located, or Null if no
** such byte exists within n bytes.
*/
void			*ft_memchr(const void *s, int c, size_t n);

/*
** FT_MEMCMP - This function compares byte string s1 against s2. Both strings
** are assumed to be n bytes long. The function returns zero if the two
** strings are identical, otherwise it returns the difference. (S1 - S2)
*/
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** ************************************************************************ *
**                                                                          *
**								  PART TWO								    *
**                                                                          *
** ************************************************************************ *
*/

/*
** FT_MEMALLOC - This function allocates with malloc and returns a 'fresh'
**  memory area. The memory allocated is initialized to 0. If the
**  allocation fails, the function returns NULL.
*/
void			*ft_memalloc(size_t size);

/*
** FT_MEMDEL - This function takes as a parameter the address of a memory
** area that needs to be freed with free, then puts the pointer to
** NULL
*/
void			ft_memdel(void **ap);

/*
** FT_STRNEW - This function allocates with malloc and returns a 'fresh'
** string ending with '\0'. Each character of the string is intialised
** at '\0'. If the allocation fails the function returns NULL.
*/
char			*ft_strnew(size_t size);

/*
** FT_STRDEL - This function takes as a parameter the address of a
** strinf that needs to be freed with free, then sets the pointer
** to NULL.
*/
void			ft_strdel(char **as);

/*
** FT_STRCCLR - This function takes a string as input and sets every
** character of the string to the value '\0'
*/
void			ft_strclr(char *s);

/*
** FT_STRITER - This function applies the function f to each character
** of the string passed as argument. Each character is passed by
** address to f to be modified if neccessary.
*/
void			ft_striter(char *s, void (*f)(char *));

/*
** FT_STRITERI - This function applies the function f to each
** character of the string passed as argument, and passing its index
** as first argument. Each character is passed by address to f to be
** be modified if necessary.
*/
void			ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** FT_STRMAP - This function applies the function f to each
** character given as argument to create a 'fresh' new string (with
** malloc) resulting from the successive applications of f.
*/
char			*ft_strmap(char const *s, char (*f)(char));

/*
** FT_STRMAPI - This function applies the function f to each character
** of the string given as argument by giving its index as first
** argument to create a 'fresh' new string (with malloc) resulting
** from the successive applications fo f.
*/
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** FT_STREQU - This function performs a lexicographical comparison
** between s1 and s2. If the 2 strings are identical the function
** returns 1, or 0 otherwise.
*/
int				ft_strequ(char const *s1, char const *s2);

/*
** FT_STRNEQU - This function performs a lexicographical comparison
** betwenn s1 and s2 up to 'n characters' or until a '\0' is
** reached. If the 2 strings are identical, the function returns
** 1, or 0 otherwise.
*/
int				ft_strnequ(char const *s1, char const *s2, size_t n);

/*
** FT_STRSUB - This funtion allocates (with malloc) and returns a
** 'fresh' string given as argument. The substring begins at index
** 'start' and is of size 'len'. If 'start' and 'len' aren't refer-
** ing to a valid substring, the behaviour is undefined. If the
** allocation fails, the function returns NULL.
*/
char			*ft_strsub(char const *s, unsigned int start, size_t len);

/*
** FT_STRJOIN - This function allocates (with malloc) and returns a
** 'fresh' string ending with '\0', result of the concatenation of
** s1 and s2. If the allocation fails, the function returns NULL.
*/
char			*ft_strjoin(char const *s1, char const *s2);

/*
** FT_STRTRIM - This function allocates (with malloc) and returns a
** copy of the string given as argument without whitespaces at the
** beginning or at the end of the string. Whitespaces are \' \', '\n'
** and '\t'. If s has no whitespaces at the beginning or end. The
** function returns a copy of s. If the allocation fails, the
** function returns NULL.
*/
char			*ft_strtrim(char const *s);

/*
** FT_STRLTRIM - This function allocates (with malloc) and returns a
** copy of the string given as argument without a char of choice at
** the beginning or at the end of the string. If no char is found at
** the beginning or end. The function returns a copy of s. If the
** allocation fails, the function returns NULL.
*/
char			*ft_strtrim_delim(char const *s, char c);

/*
** FT_STRSPLIT - This function allocates (with malloc) and returns an
** array of 'fresh' strings (all ending with '\0', including the
** array itself) obtained by splitting s using the character c as a
** delimiter. If the allocation fails the function returns NULL.
*/
char			**ft_strsplit(char const *s, char c);

/*
** FT_STRREV - This function takes a string as an argument and returns
** the string in reverse. It does not alter the string it is given but
** rather returns a new string.
*/
char			*ft_strrev(char *s);

/*
** FT_NUMLEN - This function takes an int n as an argument and returns
** the length of the number of digits as a result of size_t.
*/
size_t			ft_numlen(int n);

/*
** FT_ITOA - This function will allocate and return a fresh string ending
** with '\0'. The function returns a string equivalent of the parameter ' n',
**	given as argument. It supports negative numbers. If allocation fails, it
**	returns NULL.
*/
char			*ft_itoa(int n);

/*
** FT_PUTCHAR - This function will put a character to the standard output.
** It is limited to one char and utilises the write function.
*/
void			ft_putchar(char c);

/*
** FT_PUTSTR - This function will print a string to the standard output.
** It is limited by the '\0' terminator to show the end of the char string.
*/
void			ft_putstr(const char *s);

/*
** FT_PUTENDL - This function will print a string to the standard output
** followed by a newline char. It is limited by the '\0' terminator to show
** the end of the char string.
*/
void			ft_putendl(const char *s);

/*
** FT_PUTNBR - This function will output the integer n to the standard
** output.
*/
void			ft_putnbr(int n);

/*
** FT_PUTCHAR_FD - This function will output the char c to the file
** descriptor fd.
*/
void			ft_putchar_fd(char c, int fd);

/*
** FT_PUTSTR_FD - This function will output the str s to the file descriptor
** fd.
*/
void			ft_putstr_fd(const char *s, int fd);

/*
** FT_PUTENDL_FD - This function will output the string s to the file
** descriptor followed by a newline.
*/
void			ft_putendl_fd(const char *s, int fd);

/*
** FT_PUTNBR_FD - This function will output the integer n to the file
** descriptor fd.
*/
void			ft_putnbr_fd(int n, int fd);

/*
** ************************************************************************** *
**                                                                            *
**								  BONUS PART								  *
**                                                                            *
** ************************************************************************** *
*/

/*
**			THIS PART IS ABOUT LINKED LISTS (STRUCTS)
**
** Below are definitions of what is contained in the struct and their purpose
**
**	This part would not be possible without:
**		https://www.learn-c.org/en/Linked_lists
**		https://www.tutorialspoint.com/cprogramming/c_typedef.htm
**		https://docs.microsoft.com/en-us/dotnet/csharp/programming-guide/
**			classes-and-structs/structs
**		https://en.wikipedia.org/wiki/Struct_(C_programming_language)
*/

/*
** content	-	The data contained in the link. The void * allows to store any
**				kind of data.
*/

/*
** content size	-	The size of data stored. The void * type doesn't allow you
**				to know the size of the pointed data, as a consequence, it is
**				necessary to save its size. For instance, the size of the
**				string '42' is 3 bytes and the 32bits integer 42 has a size of
**				4 bytes.
*/

/*
** next	 	-	The next link's address or NULL if it's the last link.
*/

/*
** FT_LSTNEW - Allocates (with malloc) and returns a 'fresh' link. The variables
**			'content' and 'content_size' of the new link are initialised by
**			'copy' of the parameters of the function. If the parameter 'content'
**			is nul, the	variable content is initialised to NULL and the variable
**			'content_size' is initialised to 0 even if the parameter
**			'content_size' isn't. The variable 'next' is initialised to NULL. If
**			the allocation fails, the function returns NULL.
*/
t_list			*ft_lstnew(void const *content, size_t content_size);

/*
** FT_LSTDELONE - Takes as a parameter a link's pointer address and frees the
**			memory of the link's content using the function 'del' given as a
**			parameter, then	frees the link's memory using 'free'. The memory of
**			'next' must not be freed under any circumstance. Finally, the
**			pointer to the link that was just freed must be set to NULL
**			(read ft_memdel).
*/
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/*
** FT_LSTDEL - Takes as a parameter the address of a pointer to a link and frees
**			the memory of this link and every successor of that link using the
**			functions 'del' and 'free'. Finally the pointer to the link that was
**			just freed must be set to NULL. (read ft_memdel).
*/
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));

/*
** FT_LSTADD - This function adds the element 'new' and the beginnning of the
**			list. The function takes the address of a pointer as a parameter,
**			the pointer points to the first link of a list. The second parameter
**			is the link to add at the beginning of the list.
*/
void			ft_lstadd(t_list **alst, t_list *new);

/*
** FT_LSTITER - This function iterates the list 'lst' and applies the function
**			'(f)' to each link. A pointer to the first link is taken as the
**			first parameter. The address of a function to apply to each link of
**			a list is taken as a second parameter.
*/
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));

/*
** FT_LSTMAP - This function iterates a lst and applies the function '(f)' to
**			each link to create a 'fresh' list (using malloc) as result from the
**			successive applications of '(f)'. If the allocation fails,
**			the function returns NULL.
*/
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** ************************************************************************** *
**                                                                            *
**								EXTRA FUNCTIONS							  *
**                                                                            *
** ************************************************************************** *
*/

/*
** FT_STRLOWCASE - This function takes a string as a parameter and converts the
**		char it finds to lowercase, if it is an uppercase char. If it is
**		not possible to do so, either it is a digit or symbol, it will
**		iterate through to the next char until the end of the string.
**		This function will return argument '*str'
*/
char			*ft_strlowcase(char *str);

/*
** FT_STRUPCASE - This function takes a str as a parameter and converts it to
**		uppercase. It returns the string in uppercase when it is done.
*/
char			*ft_strupcase(char *str);

/*
** FT_STRCAPITALIZE - This function takes a string as an argument and converts
**		the first letter to an uppercase letter. It also does this to
**		every letter that occurs after a space. The function returns
**		the string after modifications.
*/
char			*ft_strcapitalize(char *str);

/*
** FT_STRLCPY - This function copies up to 'dstsize - 1' characters from the
**		string 'src' to 'dst', NUL-terminating the result if dstsize is
**		not 0. The function returns the total length of the string it
**		tried to create. For FT_STRLCPY(), this means the length of src.
**		IF: The return value is >= dstsize, the output string has been
**		truncated.
*/
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*
** FT_STRCASECMP - This function takes two strings and compares them character
**		by character. It will return 0 if the strings are equal and a
**		non-zero integer if there is a difference. The function does not
**		compare according to the case of the character.
*/
int				ft_strcasecmp(const char *s1, const char *s2);

/*
** FT_STRNCASECMP - This function takes two strings and compares them character
**		by character up to n-characters. It will return 0 if the strings
**		are equal and a non-zero integer if there is a difference. The
**		function does not compare according to the case of the character
*/
int				ft_strncasecmp(const char *s1, const char *s2, size_t n);

/*
** FT_STRCASESTR - This function will find the first occurrence of the substring
**		'needle' in the string 'haystack'. The terminating NULL-bytes
**		are not compared. This function does not factor in case of the
**		substring 'needle' or the string 'haystack'.
*/
char			*ft_strcasestr(const char *haystack, const char *needle);

/*
** FT_STRSPN - This function spans the initial part of the null-terminated str-
**		ing '*s' as long as the characters from '*s' occur in the null_term-
**		inated string 'charset'. The ft_strspn() function returns the number of
**		characters spanned.
*/
size_t			ft_strspn(const char *s, const char *charset);

/*
** FT_STRCSPN - This function spans the initial part of the null-terminated
**		string '*s' as long as the characters from '*s' DO NOT occur in the null
**		terminated string 'charset'. The ft_strcspn() function returns the
**		number of characters spanned.
*/
size_t			ft_strcspn(const char *s, const char *charset);

/*
** FT_STRTOK - This function breaks a string into a sequence of zero or more
**		non-empty tokens. The 'delim' argument specifies a set of bytes
**		that delimit the tokens in the parsed string. Each call to
**		ft_strtok() returns a pointer to a null-terminated string
**		containing the next token. This string does not include the
**		delimitting byte. If no more tokens are found, ft_strtok()
**		returns NULL.
*/
char			*ft_strtok(char *str, const char *delim);

/*
** ************************************************************************** *
**                                                                            *
**								SPECIAL USE FUNCTIONS						  *
**                                                                            *
** ************************************************************************** *
*/

/*
** FT_SWAP - This function takes two integers as argument and swaps their
**		respective values around. In this scenario, after running,
**		int *a would be = b, and b would be = a before being changed.
*/
void			ft_swap(int *a, int *b);

/*
** FT_DIV_MOD - This function divides parameters a and b and stores the result
**		in the int pointed by 'div'. It also stores the remainder of the
**		division in the int point by 'mod'.
*/
void			ft_div_mod(int a, int b, int *div, int *mod);

/*
** FT_ULTIMATE_DIV_MOD - This function divides paramaters a and b. The result
**		of this division is stored in the int pointed by a. The
**		remainder of the division is stored in the int pointed by b.
*/
void			ft_ultimate_div_mod(int *a, int *b);

/*
** FT_FACTORIAL - This function finds iteratively, the factorial
**		of a number passed to it as a parameter. If there is an error
**		it will return 0.
*/
int				ft_factorial(int nb);

/*
** FT_POWER - This function returns a the value of a power applied
**		to a number. A power lower than 0, returns 0. Overflows are not
**		handled.
*/
int				ft_power(int nb, int power);

/*
** FT_FIBONACCI - This function returns the n-th element of the Fibonacci
**		sequence, the first element being at the 0 index. The sequence
**		starts as '0, 1, 1, 2....' if index is less than 0, the return
**		value is -1.
*/
int				ft_fibonacci(int index);

/*
** FT_SQRT - This function will find and return the square root of a number
**		passed to it as a parameter, if it exists. Otherwise it will
**		return (0);
*/
int				ft_sqrt(int nb);

/*
** FT_ISPRIME - This function will check if a number passed to it as a parameter
**		is a prime number. If it is a prime number, it will return (1),
**		else it will return 0. Negative numbers return (0); 0 and 1 are
**		also not considered to be prime numbers.
*/
int				ft_is_prime(unsigned int nb);

/*
** FT_FIND_NEXT_PRIME - This function will check if a number passed to it as a
**		parameter is a prime number, if it is not. It will return the
**		next prime number after the parameter and return its value.
*/
int				ft_find_next_prime(int nb);

/*
** FT_NUMLEN_BASE - This function takes an int n as an argument and returns
** 		the length of the number of digits as a result of size_t.
**		The function works for base 10 digits. It also works for
**		a base >= 2 and bases <= 16.
*/
int				ft_numlen_base(int n, int base);

/*
**FT_ITOA_BASE - This function converts an integer value to a null-terminated
**		string using the specified base and stores the result in a char
**		array that is allocated using malloc. The base is expressed as a
**		integer, from 2 to 16. The characters comprising the base are
**		the digits from 0 to 9, followed by uppercase letter from A to F
**		For example:
**		base 4 would be "0123" and
**		base 16 "0123456789ABCDEF".
**		If base is 10 and value is negative, the resulting string is
**		preceded with a minus sign (-). With any other base, value is
**		always considered unsigned.
*/
char			*ft_itoa_base(int value, int base);

/*
** FT_PUTNBR_BASE - This function displays a number on the screen in a chosen
**		base system. The number is given in the form of an 'int', and
**		base in the form of a string of characters. The base-system
**		contains all useable symbols to display that number:
**		'0123456789 ' is used for decimal numbers
**		'01' is used for binary.
**		'0123456789ABCDEF' is used for a hexadecimal system.
**		The function can handle negative numbers.
**		Failures that cause function to print NULL.
**		The base needs to be greater in size than 1.
**		The base cannot have the same character twice.
**		The base must be alphanumeric.
*/
void			ft_putnbr_base(int n, int base);

/*
** FT_ATOI_BASE - The function converts the string argument str (base N <= 16)
**		to an integer (base 10) and returns it. The characters recognized
**		in the input are: 0123456789abcdef :
**		Those are, of course, to be trimmed according to the requested
**		base. For example,
**		base 4 recognizes "0123" and
**		base 16 recognizes "0123456789abcdef".
**		Uppercase letters are also recognized: "12fdb3" is the same as
**		"12FDB3". Minus signs ('-') are interpreted only if they are the
**		first character of the string.
*/
int				ft_atoi_base(const char *str, int base);

/*
** FT_ARRAYDUP - This function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it. If in-
** sufficient memory is available, NULL is returned.
*/
char			**ft_arraydup(const char **arr);

#endif
