/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 16:25:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char b[2];
	size_t i;
	char *result;
	char sign;

	i = ft_numlen(n);
	result = ft_strnew(i);
	if (n == 0)
		return ("0");
	if (isimin(n) == 1)
		return (ft_strcpy(result, "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	while (n > 0)
	{
		ft_tostr(b, ft_tochar(n % 10));
		n /= 10;
		ft_strcat(result, b);
	}
	if (sign == '-')
		ft_strcat(result, "-");
	sign = ' ';
	return (ft_strrev(result));
}
