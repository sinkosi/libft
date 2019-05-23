/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/23 09:00:40 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include "libft.h"

int	main(void)
{
	char *output = ("\n<<<SUCCESS>>>\n\n");

	char a = 'A';
	char b = 'b';

	ft_putstr("This is a test file to check some functions contained in the library, libft.h\n");
	ft_putstr("The first test will check islower,isupper,tolower and toupper\n");
	test_01(a);
	test_01(b);
	ft_putstr(output);
	char c = '5';
	test_02(a);
	test_02(b);
	test_02(c);
	ft_putstr(output);
	char *str1 = ("This is an arbitrary string and we will get its ft_strlen");	
	ft_putstr(str1);	
	return (0);
}
