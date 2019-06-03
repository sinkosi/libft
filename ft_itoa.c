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
	long i;
	char *result;

	i = n;
	if (i < 0)
	{
		a = '-';
		result = "-";
		i *= -1;
	}
	else
	{	
		a = ' ';
		result = "";
	}
	if (i > 9)
	{
		ft_itoa(i / 10);
	}
	a = ft_tochar(n % 10);
	result = ft_strcat(result, "N");
	return (result);
//	result = (char *)malloc(sizeof(j))		
}
