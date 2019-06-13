/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:36:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/13 16:46:44 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{	
	size_t i;
	char *result;
	char sign;

	i = ft_numlen(n);
	result = ft_strnew(i);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		return ("0");
	if (ft_isimin(n) == 1)
		return (ft_strcpy(result, "-2147483648"));
	if (n < 0)
	{
		n *= -1;
		sign = '-';
	}
	while (n > 0)
	{
		result[i-1] = ft_tochar(n % 10);
		n /= 10;
		i--;
	}
//	if (sign == '-')
//		result = ft_strcat("-", result);
	return (result);
}
