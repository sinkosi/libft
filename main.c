/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/22 16:57:21 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

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
