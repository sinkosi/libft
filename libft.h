/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/09 16:04:45 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include "./l_ctype/l_ctype.h"
# include "./l_string/l_string.h"
# include "./l_math/l_math.h"
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** FT_ATOI - This function reads a string and returns it as an integer
*/
int				ft_atoi(const char *nptr);

/*
** ************************************************************************ *
**                                                                          *
**								  PART TWO								    *
**                                                                          *
** ************************************************************************ *
*/

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
