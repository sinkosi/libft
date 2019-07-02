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

#ifndef LIBFT_CTYPE_H
# define LIBFT_CTYPE_H

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

#endif
