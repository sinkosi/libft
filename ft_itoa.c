/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/08 12:55:33 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char b[2];
	size_t i;
	size_t j;
	char *result;
	char sign;

	i = ft_numlen(n);
	j = 0;
	result = ft_strnew(i);
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	while (n > 0)
	{
		ft_tostr(b, ft_tochar(n % 10));
		n /= 10;
		j++;
		ft_strcat(result, b);
	}
	if (sign == '-')
		ft_strcat(result, "-");
	
	return (ft_strrev(result));
}
