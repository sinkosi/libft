/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/22 16:30:58 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void Test_01(char a)
{
	if(ft_islower(a))
	{
		ft_putchar(a);
		ft_putstr(" is lowercase\n");
		ft_putstr("After running ft_toupper, the new char is ");
		ft_putchar(ft_toupper(a));
		ft_putchar('\n');
	}
	if(ft_isupper(a))
	{
		ft_putchar(a);
		ft_putstr(" is uppercase\n");
		ft_putstr("After running ft_tolower, the new char is ");
		ft_putchar(ft_tolower(a));
		ft_putchar('\n');
	}
}

void	Test_02(char a)
{
	if(ft_isalnum(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is alphanumeric\n");
	}
	if(ft_isalpha(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is a letter of the alphabet.\n");
	}
	if(ft_isdigit(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char, you have entered. It is a digit.\n");
	}
	if(ft_isxdigit(a))
	{
		ft_putchar(a);
		ft_putstr(" is the char you have entered. It is a HEX digit.\n");
	}
	ft_putstr("Were you successful?\n");
}

int	main(void)
{
	char a = 'A';
	char b = 'b';

	ft_putstr("This is a test file to check some functions contained in the library, libft.h\n");
	ft_putstr("The first test will check islower,isupper,tolower and toupper\n");
	Test_01(a);
	Test_01(b);
	ft_putstr("\nSUCCESS\n\n");
	char c = '5';
	Test_02(a);
	Test_02(b);
	Test_02(c);
	return (0);
}
