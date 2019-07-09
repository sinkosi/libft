/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_string.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 16:03:40 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/09 16:03:42 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef L_STRING_H
# define L_STRING_H
# include "../l_ctype/l_ctype.h"
# include <string.h>
# include <stdlib.h>

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
** FT_STRLEN - This function returns the length of the string input
*/
size_t			ft_strlen(const char *c);

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
** FT_STRLCPY - This function copies up to 'dstsize - 1' characters from the
**		string 'src' to 'dst', NUL-terminating the result if dstsize is
**		not 0. The function returns the total length of the string it
**		tried to create. For FT_STRLCPY(), this means the length of src.
**		IF: The return value is >= dstsize, the output string has been
**		truncated.
*/
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);

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
** FT_STRCASESTR - This function will find the first occurrence of the substring
**		'needle' in the string 'haystack'. The terminating NULL-bytes
**		are not compared. This function does not factor in case of the
**		substring 'needle' or the string 'haystack'.
*/
char			*ft_strcasestr(const char *haystack, const char *needle);

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
** FT_STRREV - This function takes a string as an argument and returns
** the string in reverse. It does not alter the string it is given but
** rather returns a new string.
*/
char			*ft_strreverse(char *s);

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
** FT_STRERROR - MISSING FUNCTION
*/

#endif
