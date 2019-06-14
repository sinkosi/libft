/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:56:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/14 14:37:45 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

void	test_01(char a)
{
	if (ft_islower(a))
	{
		ft_putchar(a);
		ft_putstr(" is lowercase\n");
		ft_putstr("After running ft_toupper, the new char is ");
		ft_putchar(ft_toupper(a));
		ft_putchar('\n');
	}
	if (ft_isupper(a))
	{
		ft_putchar(a);
		ft_putstr(" is uppercase\n");
		ft_putstr("After running ft_tolower, the new char is ");
		ft_putchar(ft_tolower(a));
		ft_putchar('\n');
	}
}

void	test_02(char a)
{
	if (ft_isalnum(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is alphanumeric\n");
	}
	if (ft_isalpha(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is a letter of the alphabet.\n");
	}
	if (ft_isdigit(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is a digit.\n");
	}
	if (ft_isxdigit(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char you have entered. It is a HEX digit.\n\n");
	}
}
