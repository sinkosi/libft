/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/13 12:11:43 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct	s_list	*next;
}				t_list;

/*
** FT_STRLEN - This function returns the length of the string input
*/
size_t	ft_strlen(const char *c);

/*
** FT_ATOI - This function reads a string and returns it as an integer
*/
int		ft_atoi(const char *nptr);

/*
** FT_ISLOWER - Checks a char, input as an int, references the ascii table to
** see if it is a valid lowercase char
*/
int		ft_islower(int c);

/*
** FT_ISUPPER - Checks a char, input as an int, references the ascii table to
** see if it is a valid uppercase char
*/
int		ft_isupper(int c);

/*
** FT_ISALPHA - Checks a char, input as an int, references the ascii table to
** see if it is a valid alphabet. It is the equivalent of
** (ft_isupper(c) || ft_islower(c))
*/
int		ft_isalpha(int c);

/*
** FT_ISDIGIT - Checks a char, input as an int, references the ascii table to
** see if it is a valid digit between 0 and 9.
*/
int		ft_isdigit(int c);

/*
** FT_ISALNUM - Checks a char, input as an int, references the ascii table to
** see if it is a valid digit or letter of the alphabet. It is the equivalent
** of (ft_isalpha(c) || ft_isdigit(c))
*/
int		ft_isalnum(int c);

/*
** FT_ISBLANK - Checks a char, input as an int, references the ascii table to
** see if it is a blank space or a tab. It checks for 32 or 9.
*/
int		ft_isblank(int c);

/*
** FT_ISSPACE - Checks a char, input as an int, references the ascii table to
** see if it is a space, '\f' up to the point of '\v'
*/
int		ft_isspace(int c);

/*
** FT_ISASCII - Checks whether the input is an unsigned char and a valid char
** in terms of the ASCII table.
*/
int		ft_isascii(int c);

/*
** FT_ISGRAPH - Checks input and references ASCII table for printable
** character sets excluding space.
*/
int ft_isgraph(int c);

/*
** FT_ISPRINT - Checks input and references ASCII table for printable
** character sets including space.
*/
int ft_isprint(int c);

/*
** FT_ISXDIGIT - Checks input and references as to whether it is a hexadecimal
** digit i.e	0 1 2 3 4 5 6 7 8 9 A B C D E F
** 								    a b c d e f
*/
int ft_isxdigit(int c);

/*
** FT_ISIMAX - This function will take an integer as an argument and return 1
** if the integer is greater than or equal to 2147483647. It will return 0, if it
** less
*/
int	ft_isimax(int n);

/*
** FT_ISIMIN - This function will take an integer as an argument and return 1
** if the integer is less than or equal to -2147483648. It will return 0, if it
** is more.
*/
int ft_isimin(int n);

/*
** FT_TOUPPER - This function coverts a lowercase letter to an uppercase letter.
** The function will return the uppercase letter if it is successful, or the
** original input if it fails.
*/
int ft_toupper(int c);

/*
** FT_TOLOWER - This function converts an uppercase letter to a lowercase letter.
** The function will return the lowercase letter if it is successful, or the
** original input if it fails.
*/
int ft_tolower(int c);

/*
** FT_STRCPY - This function copies the source string and applies it to a 
** destination string, including the '\0' terminator char.
*/
char *ft_strcpy(char *dst, const char *src);

/*
** FT_STRNCPY - This function copies at most len characters from src to dst.
** If src is less than len char long, the remainder of dst is filled with 
** '\0' characters. Otherwise dst is not determined.
*/
char *ft_strncpy(char *dst, const char *src, size_t len);

/* 
** FT_STRCMP - This function compares characters in a string lexicographically
** The function returns 0 if the strings are equal, and non-zero if they are
** not equal.
*/
int ft_strcmp(const char *s1, const char *s2);

/*
**FT_STRNCMP - This function compares characters in a string up to n charac-
** ters. The function returns 0 if the strings are equalm and non-zero if
** they are not equal.
*/
int ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** FT_STRCAT - This function will append a copy of a null terminated string
** s2 to the end of the null terminated string s1. Then it will add a null
** terminator string '\0'.
*/
char	*ft_strcat(char *dst, const char *src);

/*
** FT_STRNCAT - This function wiil append not more that n characters from
** string s2 to the end of string s1 and then add the termiantor character
** '\0'. It will return the pointer s1.
*/
char	*ft_strncat(char *dst, const char *src, size_t n);

/*
** FT_STRLCAT - This function will append string src to string dst if the
** BUFFER can guarantee NUL-termination and there is room to do. Room for
** NUL should be included in dstsize.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
** FT_STRCHR - This function locates the first occurence of c in the string
** pointed to by s. The function returns a pointer to the located charac-
** ter. It can also find the '\0' character.
*/
char	*ft_strchr(const char *s, int c);

/*
** FT_STRRCHR - This function locates the last occurence of c in the string
** pointed to by s. The function returns a pointer to the located charac-
** ter. It can also fins the '\0' character.
*/
char	*ft_strrchr(const char *s, int c);

/*
** FT_STRSTR - This function locates the first occurrence of the null-
** terminated string 'needle' in the null terminated string 'haystack'
** If needle is empty, haystack is returned. If no needle is found then
** NULL us returned. If found a pointer to first occurrence is returned.
*/
char	*ft_strstr(const char *haystack, const char *needle);

/*
** FT_STRNSTR - This function locates the first occurrence of the string
** 'needle' in the string' haystack up to n characters. It returns hay-
** stack if needle empty. If no needle is found it returns NULL, if 
** found it will return a pointer to the occurence of needle.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*
** FT_STRDUP - This function allocates sufficient memory for a copy of
** the string s1, does the copy, and returns a pointer to it. If in-
** sufficient memory is available, NULL is returned.
*/
char	*ft_strdup(const char *s1);

/*
** FT_STRNDUP - This function allocates sufficient memory for a copy
** of the string s1. The function copies at most n characters from
** the string s1 always NUL terminating the copied string
*/
char	*ft_strndup(const char *s1, size_t n);

/*
** FT_MEMSET - This funtion writes len bytes of value c (converted to an
** unsigned char) to the string b. The memset() function returns its
** first argument
*/
void	*ft_memset(void *b, int c, size_t len);

/*
** FT_BZERO - This function writes zeroes to a byte string. It writes n
** zeroed bytes to the string s. If n is zero, ft_bzero() does
** nothing
*/
void	*ft_bzero(void *s, size_t n);

/*
** FT_MEMCPY - This function will copy memory area. It copies n bytes from
** memory area src to memory area dst. The ft_memcpy() function returns
** the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

/*
** FT_MEMCCPY - This function will copy a byte string until it finds a char.
** The memccpy() function copies bytes from src to dst. If the char c
** occurs in the string src. The copy stops and a pointer is returned.
*/
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
**FT_MEMSIZE - This function will take a parameter as an argument and 
** return its allocated bytes as an unsigned int.
*/
unsigned int	ft_memsize(void *s1);

/*
** FT_MEMSWAP - This function will take two paramaters and switch their
** values. It will take s1 and s2, and return the values in such a way
** that s1 will have the value of s2, and s2 will have the value of s1.
*/
void	ft_memswap(void *s1, void *s2);
 
/*
** FT_MEMMOVE - This function will copy a byte string. It takes len bytes
** from src to dst. The strings may overlap. The function returns the 
** original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len);

/*
** FT_MEMCHR - This function will locate the first occurence of c in string
** s. The function returns a pointer to the byte located, or Null if no
** such byte exists within n bytes.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/*
** FT_MEMCMP - This function compares byte string s1 against s2. Both strings
** are assumed to be n bytes long. The function returns zero if the two
** strings are identical, otherwise it returns the difference. (S1 - S2)
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n);

/* ************************************************************************** */
/*                                                                            */
/*								  PART TWO									  */
/*                                                                            */
/* ************************************************************************** */

/*
** FT_MEMALLOC - This function allocates with malloc and returns a 'fresh'
**  memory area. The memory allocated is initialized to 0. If the
**  allocation fails, the function returns NULL.
*/
void	*ft_memalloc(size_t size);

/*
** FT_MEMDEL - This function takes as a parameter the address of a memory
** area that needs to be freed with free, then puts the pointer to
** NULL
*/
void	ft_memdel(void **ap);

/*FT_STRNEW - This function allocates with malloc and returns a 'fresh'
** string ending with '\0'. Each character of the string is intialised
** at '\0'. If the allocation fails the function returns NULL. 
*/
char	*ft_strnew(size_t size);

/*
** FT_STRDEL - This function takes as a parameter the address of a 
** strinf that needs to be freed with free, then sets the pointer
** to NULL.
*/
void	ft_strdel(char **as);

/*
** FT_STRCCLR - This function takes a string as input and sets every
** character of the string to the value '\0'
*/
void	ft_strclr(char *s);

/*
** FT_STRITER - This function applies the function f to each character
** of the string passed as argument. Each character is passed by
** address to f to be modified if neccessary.
*/
void	ft_striter(char *s, void (*f)(char *));

/*
** FT_STRITERI - This function applies the function f to each
** character of the string passed as argument, and passing its index
** as first argument. Each character is passed by address to f to be
** be modified if necessary.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** FT_STRMAP - This function applies the function f to each 
** character given as argument to create a 'fresh' new string (with
** malloc) resulting from the successive applications of f.
*/
char	*ft_strmap(char const *s, char (*f)(char));

/*
** FT_STRMAPI - This function applies the function f to each character
** of the string given as argument by giving its index as first
** argument to create a 'fresh' new string (with malloc) resulting
** from the successive applications fo f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** FT_STREQU - This function performs a lexicographical comparison
** between s1 and s2. If the 2 strings are identical the function
** returns 1, or 0 otherwise.
*/
int	ft_strequ(char const *s1, char const *s2);

/*
** FT_STRNEQU - This function performs a lexicographical comparison
** betwenn s1 and s2 up to 'n characters' or until a '\0' is
** reached. If the 2 strings are identical, the function returns
** 1, or 0 otherwise.
*/
int	ft_strnequ(char const *s1, char const *s2, size_t n);

/*
** FT_STRSUB - This funtion allocates (with malloc) and returns a
** 'fresh' string given as argument. The substring begins at index
** 'start' and is of size 'len'. If 'start' and 'len' aren't refer-
** ing to a valid substring, the behaviour is undefined. If the
** allocation fails, the function returns NULL.
*/
char	*ft_strsub(char const *s, unsigned int start, size_t len);

/*
** FT_STRJOIN - This function allocates (with malloc) and returns a
** 'fresh' string ending with '\0', result of the concatenation of
** s1 and s2. If the allocation fails, the function returns NULL.
*/
char	*ft_strjoin(char const *s1, char const *s2);

/*
** FT_STRTRIM - This function allocates (with malloc) and returns a
** copy of the string given as argument without whitespaces at the
** beginning or at the end of the string. Whitespaces are \' \', '\n'
** and '\t'. If s has no whitespaces at the beginning or end. The
** function returns a copy of s. If the allocation fails, the
** function returns NULL.
*/
char	*ft_strtrim(char const *s);

/*
** FT_STRSPLIT - This function allocates (with malloc) and returns an
** array of 'fresh' strings (all ending with '\0', including the 
** array itself) obtained by splitting s using the character c as a
** delimiter. If the allocation fails the function returns NULL.
*/
char	**ft_strsplit(char const *s, char c);

/*
** FT_TOCHAR - This function will take an integer as an argument and 
** return it as a char.
*/
char	ft_tochar(int n);

/*
** FT_TOSTR - This function will take a char as an argument and cast it
** as a string of length one.
*/
char	*ft_tostr(char s[], char c);

/*
** FT_STRREV - This function takes a string as an argument and returns
** the string in reverse. It does not alter the string it is given but
** rather returns a new string.
*/
char	*ft_strrev(char *s);

/*
** FT_NUMLEN - This function takes an int n as an argument and returns
** the length of the number of digits as a result of size_t.
*/
size_t	ft_numlen(int n);

/*
** FT_ITOA - This function will allocate and return a fresh string ending
** with '\0'.
*/
char	*ft_itoa(int n);

/*
** FT_PUTCHAR - This function will put a character to the standard output.
** It is limited to one char and utilises the write function.
*/
void	ft_putchar(char c);

/*
** FT_PUTSTR - This function will print a string to the standard output.
** It is limited by the '\0' terminator to show the end of the char string.
*/
void	ft_putstr(const char *s);

/*
** FT_PUTENDL - This function will print a string to the standard output 
** followed by a newline char. It is limited by the '\0' terminator to show
** the end of the char string. 
*/
void	ft_putendl(const char *s);

/*
** FT_PUTNBR - This function will output the integer n to the standard
** output.
*/
void	ft_putnbr(int n);

/*
** FT_PUTCHAR_FD - This function will output the char c to the file descriptor
** fd.
*/
void	ft_putchar_fd(char c, int fd);

/*
** FT_PUTSTR_FD - This function will output the str s to the file descriptor
** fd.
*/
void	ft_putstr_fd(const char *s, int fd);

/*
** FT_PUTENDL_FD - This function will output the string s to the file
** descriptor followed by a newline.
*/
void	ft_putendl_fd(const char *s, int fd);

/*
** FT_PUTNBR_FD - This function will output the integer n to the file
** descriptor fd.
*/
void	ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/*                                                                            */
/*								  BONUS PART								  */
/*                                                                            */
/* ************************************************************************** */

/*
**			THIS PART IS ABOUT LINKED LISTS (STRUCTS)
**
** Below are definitions of what is contained in the struct and their purpose
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
**			'content' and 'content_size' of the new link are initialised by 'copy' of
**			the parameters of the function. If the parameter 'content' is nul, the
**			variable content is initialised to NULL and the variable 'content_size'
**			is initialised to 0 even if the parameter 'content_size' isn't. The
**			variable 'next' is initialised to NULL. If the allocation fails, the
**			function returns NULL.
*/
t_list	*ft_lstnew(void const *content, size_t content_size);

/*
** FT_LSTDELONE - Takes as a parameter a link's pointer address and frees the memory
**			of the link's content using the function 'del' given as a parameter, then
**			frees the link's memory using 'free'. The memory of 'next' must not be
**			freed under any circumstance. Finally, the pointer to the link that was
**			just freed must be set to NULL (read ft_memdel).
*/
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

/*
** FT_LSTDEL - Takes as a parameter the address of a pointer to a link and frees
**			the memory of this link and every successor of that link using the
**			functions 'del' and 'free'. Finally the pointer to the link that was
**			just freed must be set to NULL. (read ft_memdel).
*/
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

/*
** FT_LSTADD - This function adds the element 'new' and the beginnning of the list.
**			The function takes the address of a pointer as a parameter, the pointer
**			points to the first link of a list. The second parameter is the link to
**			add at the beginning of the list.
*/
void	ft_lstadd(t_list **alst, t_list *new);

/*
** FT_LSTITER - This function iterates the list 'lst' and applies the function '(f)'
**			to each link. A pointer to the first link is taken as the first parameter.
**			The address of a function to apply to each link of a list is taken as a
**			second parameter.
*/
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));

/*
** FT_LSTMAP - This function iterates a lst and applies the function '(f)' to each link
**			to create a 'fresh' list (using malloc) as result from the successive
**			applications of '(f)'. If the allocation fails, the function returns NULL.
*/
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
