/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/30 14:44:41 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the main header file for libft.
 * This is created by sinkosi for libft project.
 */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

/*FT_STRLEN - This function returns the length of the string input */
size_t ft_strlen(const char *c);

/*FT_ATOI - This function reads a string and returns it as an integer*/
int ft_atoi(const char *nptr);

/*FT_ISLOWER - Checks a char, input as an int, references the ascii table to
 * see if it is a valid lowercase char*/
int ft_islower(int c);

/*FT_ISUPPER - Checks a char, input as an int, references the ascii table to
 * see if it is a valid uppercase char*/
int ft_isupper(int c);

/*FT_ISALPHA - Checks a char, input as an int, references the ascii table to
 * see if it is a valid alphabet. It is the equivalent of
 * (ft_isupper(c) || ft_islower(c))*/
int ft_isalpha(int c);

/*FT_ISDIGIT - Checks a char, input as an int, references the ascii table to
 * see if it is a valid digit between 0 and 9.*/
int ft_isdigit(int c);

/*FT_ISALNUM - Checks a char, input as an int, references the ascii table to
 * see if it is a valid digit or letter of the alphabet. It is the equivalent
 * of (ft_isalpha(c) || ft_isdigit(c))*/
int ft_isalnum(int c);

/*FT_ISBLANK - Checks a char, input as an int, references the ascii table to
 * see if it is a blank space or a tab. It checks for 32 or 9.*/
int ft_isblank(int c);

/*FT_ISSPACE - Checks a char, input as an int, references the ascii table to
 * see if it is a space, '\f' up to the point of '\v'*/
int ft_isspace(int c);

/*FT_ISASCII - Checks whether the input is an unsigned char and a valid char
 * in terms of the ASCII table.*/
int ft_isascii(int c);

/*FT_ISGRAPH - Checks input and references ASCII table for printable
 * character sets excluding space.*/
int ft_isgraph(int c);

/*FT_ISPRINT - Checks input and references ASCII table for printable
 * character sets including space.*/
int ft_isprint(int c);

/*FT_ISXDIGIT - Checks input and references as to whether it is a hexadecimal
 * digit i.e	0 1 2 3 4 5 6 7 8 9 A B C D E F
 * 				    a b c d e f*/
int ft_isxdigit(int c);

/*FT_TOUPPER - This function coverts a lowercase letter to an uppercase letter.
 * The function will return the uppercase letter if it is successful, or the
 * original input if it fails.*/
int ft_toupper(int c);

/*FT_TOLOWER - This function converts an uppercase letter to a lowercase letter.
 * The function will return the lowercase letter if it is successful, or the
 * original input if it fails.*/
int ft_tolower(int c);

/*FT_STRCPY - This function copies the source string and applies it to a 
 * destination string, including the '\0' terminator char.
 */
char *ft_strcpy(char *dst, const char *src);

/*FT_STRNCPY - This function copies at most len characters from src to dst.
 * If src is less than len char long, the remainder of dst is filled with 
 * '\0' characters. Otherwise dst is not determined.*/
char *ft_strncpy(char *dst, const char *src, size_t len);

/*FT_STRCMP - This function compares characters in a string lexicographically
 * The function returns 0 if the strings are equal, and non-zero if they are
 * not equal.*/
int ft_strcmp(const char *s1, const char *s2);

/*FT_STRNCMP - This function compares characters in a string up to n charac-
 * ters. The function returns 0 if the strings are equalm and non-zero if
 * they are not equal.*/
int ft_strncmp(const char *s1, const char *s2, size_t n);

/*FT_PUTCHAR - This function will put a character to the standard output.
 * It is limited to one char and utilises the write function.
 */
void	ft_putchar(char c);

/*FT_PUTSTR - This function will print a string to the standard output.
 * It is limited by the '\0' terminator to show the end of the char string.
 */
void	ft_putstr(const char *str);

/*FT_STRCAT - This function will append a copy of a null terminated string
 * s2 to the end of the null terminated string s1. Then it will add a null
 * terminator string '\0'.*/
char	*ft_strcat(char *dst, const char *src);

/*FT_STRNCAT - This function wiil append not more that n characters from
 * string s2 to the end of string s1 and then add the termiantor character
 * '\0'. It will return the pointer s1.*/
char	*ft_strncat(char *dst, const char *src, size_t n);

/*FT_STRLCAT - This function will append string src to string dst if the
 * BUFFER can guarantee NUL-termination and there is room to do. Room for
 * NUL should be included in dstsize.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*FT_STRCHR - This function locates the first occurence of c in the string
 * pointed to by s. The function returns a pointer to the located charac-
 * ter. It can also find the '\0' character.*/
char	*ft_strchr(const char *s, int c);

/*FT_STRRCHR - This function locates the last occurence of c in the string
 * pointed to by s. The function returns a pointer to the located charac-
 * ter. It can also fins the '\0' character.*/
char	*ft_strrchr(const char *s, int c);

/*FT_STRSTR - This function locates the first occurrence of the null-
 * terminated string 'needle' in the null terminated string 'haystack'
 * If needle is empty, haystack is returned. If no needle is found then
 * NULL us returned. If found a pointer to first occurrence is returned.
 */
char	*ft_strstr(const char *haystack, const char *needle);

/*FT_STRNSTR - This function locates the first occurrence of the string
 * 'needle' in the string' haystack up to n characters. It returns hay-
 * stack if needle empty. If no needle is found it returns NULL, if 
 * found it will return a pointer to the occurence of needle.*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*FT_STRDUP - This function allocates sufficient memory for a copy of
 * the string s1, does the copy, and returns a pointer to it. If in-
 * sufficient memory is available, NULL is returned.*/
char	*ft_strdup(const char *s1);

/*FT_STRNDUP - This function allocates sufficient memory for a copy
 * of the string s1. The function copies at most n characters from
 * the string s1 always NUL terminating the copied string*/
char	*ft_strndup(const char *s1, size_t n);

/*FT_MEMSET - This funtion writes len bytes of value c (converted to an
 * unsigned char) to the string b. The memset() function returns its
 * first argument*/
void	*ft_memset(void *b, int c, size_t len);

/*FT_BZERO - This function writes zeroes to a byte string. It writes n
 * zeroed bytes to the string s. If n is zero, ft_bzero() does
 * nothing*/
void	*ft_bzero(void *s, size_t n);

#endif
