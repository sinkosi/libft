/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_math.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:54:28 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/09 15:49:31 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef L_MATH_H
# define L_MATH_H
# include "../l_ctype/l_ctype.h"

/*
** l_math is a Math Library created by Sibonelo Nkosi to conduct some in-depth
**	and challenging Math calculations. The functions contained herein, will
**	be recreations of the standard 'math.h' library contained within C.
**
** There will be additional functions contained therein, including structs and
**	macros. The purpose of these is for graphics rendering, algorithm opti-
**	mization, binary tree traversals and (but not limited to) sorting.
**
**
** ************************************************************************ *
**																			*
**									MACROS									*
**																			*
** ************************************************************************ *
**
** The Natural number e
*/
# define M_E 2.78182818284590452354
# define M_LOG2E 1.4426950408889634074
# define M_LOG10E 0.43429448190325182765
# define M_LN2 0.69314718055994530942
# define M_LN10 2.30258509299404568402

/*
** PI
** (1) PI	(2) 0.5 * PI 	(3) 0.25 * PI
** (4) 1 / PI	(5) 2 / PI	(6) SQRT(PI)
*/
# define M_PI 3.14159265358979323846
# define M_PI_2 1.57079632679489661923
# define M_PI_4 0.78539816339744830962
# define M_1_PI 0.31830988618379067154
# define M_2_PI 0.63661977236758134308
# define M_2_SQRTPI 1.12837916709551257390

/*
** SQRT
** (1) SQRT(2)	(2) SQRT(0.5)
*/
# define M_SQRT2 1.41421356237309504880
# define M_SQRT1_2 0.70710678118654752440

/*
** ************************************************************************ *
**																			*
**									VECTORS									*
**																			*
** ************************************************************************ *
*/

typedef	struct	s_vector
{
	double x;
	double y;
	double z;
}				t_vector;
/*
** vector_add - A function to perform basic addition of two vectors in the form
**		of (v1 + v2)
*/
t_vector		vector_add(t_vector v1, t_vector v2);

/*
** vector_subtract - A function to perform basic subtraction between two vectors
**		in the form of (v1 - v2)
*/
t_vector		vector_subtract(t_vector v1, t_vector v2);

/*
** vector_multiply - A basic function to perform basic multiplication between
**		a vector v1 and a value of type double. This is not the cross product.
**		This function returns a vector of (x*value),(y*value) & (z*value).
*/
void			vector_multiply(t_vector v1, double multiple);

/*
** vector_divide - This is a basic function to divide vector v1 by a value of
**		type double. It returns x/value, y/value & z/value.
*/
void			vector_divide(t_vector v1, double divisor);

/*
** vector_magnitude - This is a basic function to obtain the magnitude of a
**		vector, returning a value of type double.
*/
double			vector_magnitude(t_vector v1);

/*
** ************************************************************************** *
**                                                                            *
**								MATHEMATICAL FUNCTIONS						  *
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
** FT_FABS - This function will return the absolute value of the double number
**		parsed as a parameter. If x is negative, the positive is
**		returned.
*/
double			ft_fabs(double x);

/*
** ************************************************************************** *
**                                                                            *
**								TRIGONOMETRIC FUNCTIONS						  *
**                                                                            *
** ************************************************************************** *
*/

/*
** FT_SIN
*/
double			ft_sine(int deg);

/*
** FT_COSINE
*/
double			ft_cosine(int deg);

#endif
