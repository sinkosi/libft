/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/07 16:42:29 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char a;
	char b[2];
	char sign;
	size_t i;
	size_t j;
	char *result;

	i = ft_numlen(n);
	j = 0;
	result = ft_strnew(i);
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	while (j < i)
	{
		a = ft_tochar(n % 10);
		n /= 10;
		j++;	
		ft_tostr(b, a);
		ft_strcat(result, b);
	}
	if (sign == '-')
		result[j - 1] = '-';
	char *rev;
	rev = ft_strrev(result);
	return (rev);
}
