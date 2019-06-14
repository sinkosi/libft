/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/14 10:03:09 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	chksgn(int n)
{
	char	sign;

	sign = ' ';
	if (n < 0)
		sign = '-';
	return (sign);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*result;
	char	sign;
	unsigned int num;
	
	i = ft_numlen(n);
	result = ft_strnew(i);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		return ("0");
	result[i] = '\0';
	if (ft_isimin(n) == 1)
		return (ft_strcpy(result, "-2147483648"));
	/*if (n < 0)
	{
		n *= -1;
		sign = '-';
	}*/
	sign = chksgn(n);
	num = (unsigned int)n;
	while (num > 0)
	{
		result[i - 1] = ft_tochar(num % 10);
		num /= 10;
		i--;
	}
	if (sign == '-')
		result[0] = '-';
	sign = ' ';
	return (result);
}
