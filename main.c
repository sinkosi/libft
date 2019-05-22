/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/22 13:12:30 by sinkosi          ###   ########.fr       */
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

int	main(void)
{
	char a = 'A';
	char b = 'b';

	ft_putstr("This is a test file to check some functions contained in the library, libft.h\n");
	ft_putstr("The first test will check islower,isupper,tolower and toupper\n");
	Test_01(a);
	Test_01(b);
	ft_putstr("\n\nSUCCESS\n\n\n");
	return (0);
}
