/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/07 14:48:50 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char a;
	char *b;
	size_t i;
	int j;
	char *result;

	i = ft_numlen(n) + 1;
	j = 0;
	result = ft_strnew(i);
	ft_putstr("\nTEST POINT #01\n");
	if (n < 0)
	{
		n *= -1;
		result[j] = '-';
		ft_putstr("TEST POINT #02\n");
		ft_putstr(result);
		j++;
		ft_putstr("\nTEST POINT #03\n");
	}
	a = ft_tochar(n % 10);
	ft_putchar(a);
	ft_putstr("\nTEST POINT #04\n");
	b = ft_tostr(a);
	ft_putstr(b);
	ft_putchar('\n');
	result[j] = a;
	ft_putstr("TEST POINT #05\n");

	ft_putstr("TEST POINT #06\n");
	return (result);
}
