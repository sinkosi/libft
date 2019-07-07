/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_ctype.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:03:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/02 14:16:26 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef L_CTYPE_H
# define L_CTYPE_H
# include <string.h>

/*
** FT_ISLOWER - Checks a char, input as an int, references the ascii table to
** see if it is a valid lowercase char
*/
int				ft_islower(int c);

/*
** FT_ISUPPER - Checks a char, input as an int, references the ascii table to
** see if it is a valid uppercase char
*/
int				ft_isupper(int c);

/*
** FT_ISALPHA - Checks a char, input as an int, references the ascii table to
** see if it is a valid alphabet. It is the equivalent of
** (ft_isupper(c) || ft_islower(c))
*/
int				ft_isalpha(int c);

/*
** FT_ISDIGIT - Checks a char, input as an int, references the ascii table to
** see if it is a valid digit between 0 and 9.
*/
int				ft_isdigit(int c);

/*
** FT_ISALNUM - Checks a char, input as an int, references the ascii table to
** see if it is a valid digit or letter of the alphabet. It is the equivalent
** of (ft_isalpha(c) || ft_isdigit(c))
*/
int				ft_isalnum(int c);

/*
** FT_ISBLANK - Checks a char, input as an int, references the ascii table to
** see if it is a blank space or a tab. It checks for 32 or 9.
*/
int				ft_isblank(int c);

/*
** FT_ISSPACE - Checks a char, input as an int, references the ascii table to
** see if it is a space, '\f' up to the point of '\v'
*/
int				ft_isspace(int c);

/*
** FT_ISASCII - Checks whether the input is an unsigned char and a valid char
** in terms of the ASCII table.
*/
int				ft_isascii(int c);

/*
** FT_ISGRAPH - Checks input and references ASCII table for printable
** character sets excluding space.
*/
int				ft_isgraph(int c);

/*
** FT_ISPUNCT - This function checks whether a character is a punctuation char.
**		A punctuation character is a any graphic character (ft_isgraph)
**		that is not alphanumeric (!(ft_isalnum)). The function returns
**		(1) for true and (0) for false.
*/
int				ft_ispunct(int c);

/*
** FT_ISCNTRL - This function checks whether a character is a control character
**		that cannot be printed. It is the opposite of FT_ISPRINT. It
**		returns a 1 if it is true and a 0 if it is false.
*/
int				ft_iscntrl(int c);

/*
** FT_ISPRINT - Checks input and references ASCII table for printable
** character sets including space.
*/
int				ft_isprint(int c);

/*
** FT_ISXDIGIT - Checks input and references as to whether it's a hexadecimal
** digit i.e	0 1 2 3 4 5 6 7 8 9 A B C D E F
** 								    a b c d e f
*/
int				ft_isxdigit(int c);

/*
** FT_ISIMAX - This function will take an integer as an argument and return 1
** if the integer is greater than or equal to 2147483647. It will return 0,
** if it less
*/
int				ft_isimax(int n);

/*
** FT_ISIMIN - This function will take an integer as an argument and return 1
** if the integer is less than or equal to -2147483648. It will return 0, if
** it is more.
*/
int				ft_isimin(int n);

/*
** FT_TOUPPER - This function coverts a lowercase letter to an uppercase let-
** ter. The function will return the uppercase letter if it is successful,
** or the original input if it fails.
*/
int				ft_toupper(int c);

/*
** FT_TOLOWER - This function converts an uppercase letter to a lowercase let-
** ter. The function will return the lowercase letter if it is successful,
** or the original input if it fails.
*/
int				ft_tolower(int c);

/*
** FT_TOCHAR - This function will take an integer as an argument and
** return it as a char.
*/
char			ft_tochar(int n);

/*
** FT_TOSTR - This function will take a char as an argument and cast it
** as a string of length one.
*/
char			*ft_tostr(char s[], char c);

/*
** FT_STR_IS_LOWERCASE - This function checks lexicographically, each character
**		in a given string to determine if it is lowercase. If the entire
**		string is lowercase, the function returns a 1. If one char is
**		not a lowercase letter. It will return a 0.
*/
int				ft_str_is_lowercase(char *str);

/*
** FT_STR_IS_UPPERCASE - This function checks lexicographically, each character
**		in a given string to determine if it is uppercase. If the entire
**		string is uppercase, the function will return a 1. If one char
**		is not uppercase, the function returns a 0.
*/
int				ft_str_is_uppercase(char *str);

/*
** FT_STR_IS_ALPHA - This function checks lexicographically if each current in
**		a given string is a letter of the alphabet. If the entire string
**		is of type alpha, the function will return a 1. If it is not of
**		type alphabet, it will return a 0.
*/
int				ft_str_is_alpha(char *str);

/*
** FT_STR_IS_NUMERIC - This function checks a string, one character at a time
**		to ensure that it consists of only digits between 0 and 9. The
**		function will return 1 if it is true. It will return 0 if the
**		string consists of characters other than digits.
*/
int				ft_str_is_numeric(char *str);

/*
** FT_STR_IS_XNUMERIC - This function checks a string, one character at a time
**		to ensure that it is a valid HEX number. The function will
**		return a 1 if every char in a string is a valid HEX digit. If
**		one char is not a HEX number, it will return 0.
*/
int				ft_str_is_xnumeric(char *str);

/*
** FT_STR_IS_ALNUM - This function checks a string, one character at a time
**		to ensure that it consists of only aplhanumeric characters.
**		If the string only consists of alphanumeric characters, it will
**		return a 1. If one character is not alphanumeric, it will return
**		a 0.
*/
int				ft_str_is_alnum(char *str);

/*
** FT_STR_IS_PRINTABLE - This function checks a string, one character at a time
**		to ensure that it consists of printable characters. If the
**		string consists of only printable characters, then it will
**		return a 1. If one character is not printable, then it will
**		return a 0.
*/
int				ft_str_is_printable(char *str);

#endif
