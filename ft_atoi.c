/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:30:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 14:32:46 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
	if(*nptr == '\0')
		return 0;
	long result;
	long sign;
	long i;

	sign = 1;
	result = 0;
	i = 0;
	while((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		sign = -1 * sign;
	while(nptr[i] == '-' || nptr[i] == '+')
	{
		i++;
	}	
	while(nptr[i] != '\0' && (ft_isdigit(nptr[i+1]) == 1))
	{
		if (ft_isdigit(nptr[i]) == 0)
			return (0);
		while(nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = (result * 10) + (nptr[i] - 48);
			i++;
		}
	}
	return ((int)(sign * result));
}
