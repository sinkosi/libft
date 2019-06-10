/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:25:49 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 16:06:47 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while ((n / 10) > 0 && n != 0)
	{
		n /= 10;
		i++;
	}
	/*ft_putnbr(i);
	ft_putchar('\n');*/
	return (i);
}
/*THIS FUNCTION NEEDS TO BE TESTED AGAIN, I 
 * ALSO NEED TO DECIDE HOW I HANDLE POSITIVE
 * AND NEGATIVE NUMBERS.
 *
 * THE LENGTH AFFECTS ITOA*/
