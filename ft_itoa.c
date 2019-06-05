/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/03 15:28:09 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char a;
	char *b;
	size_t i;
	char *result;

	i = ft_numlen(n);
	result = ft_strnew(i);
	if (n < 0)
	{
		a = '-';
		n *= -1;
	}
	while (n > 9)
	{
		b = ft_tostr(n % 10);
		result = ft_strcat(result, b);
		n = (n / 10);
	}
	b = ft_tostr(n % 10);
	result = ft_strcat(result, b);
	if (a == '-')
	{
		b = ft_tostr(a);
		result = ft_strcat(result, b);
	}
	result = ft_strrev(result);
	return (result);
}
