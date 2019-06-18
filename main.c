/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:12:08 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/18 10:18:29 by sinkosi          ###   ########.fr       */
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
	char c = 'a';
	test_02(a);
	test_02(b);
	test_02(c);
	ft_putstr(output);
	char *str1 = ("This is an arbitrary string and we will get its ft_strlen\n");	
	ft_putstr(str1);
	int i = -71615;
	size_t j = ft_numlen(i);
	ft_putnbr(j);
	ft_putchar('\n');
	char* t_itoa;
	t_itoa = ft_itoa(i);
	ft_putchar('\n');
	ft_putstr(t_itoa);
	ft_putchar('\n');	
	ft_putnbr(ft_numlen(5859));
	ft_putchar('\n');
/*	char chris[2];
	ft_tostr(chris, c);
	ft_putstr(chris);*/
	char const *trim_me = "\n\n\n\n\t  A long string \n\n\n\n";
	char *trimmed;
	trimmed = ft_strtrim(trim_me);
	ft_putstr(trimmed);
	ft_putchar('\n');
	char const *ltrim = "*hello*fellow***students*";
	char *ltrimmed;
	ltrimmed = ft_strltrim(ltrim, '*');
	ft_putendl(ltrimmed);
	char **table;
	table = ft_strsplit(ltrim, '*');
		//("THIS IS A ** SENT*** ENCE ** THAT **", '*');
	return (0);
}
