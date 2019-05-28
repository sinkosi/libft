/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:30:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/28 10:46:24 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the atoi function for libft.h
 * This  is created by sinkosi for WTC NPC
 */

#include <string.h>
#include "libft.h"

int ft_atoi(const char *nptr)
{
	if(*nptr == '\0')
		return 0;
	int result;
	int sign;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	/*The following part is a while loop to removed tabs and whitespaces*/
	while((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;

	/*This is where we deal with the leading sign to determine the leading interger value*/
	while(nptr[i] == '-' || nptr[i] == '+')
	{
		if(sign == '-')
			sign = -1 * sign;
		i++;
	}

	while(nptr[i] != '\0')
	{/*The above while loop will ensure that there is actually a variable to deal with*/
		while(nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = (result * 10) + (nptr[i] - 48);
			i++;
		}
	}
	return (sign * result);
}
