/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/22 08:34:41 by sinkosi          ###   ########.fr       */
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

#endif
