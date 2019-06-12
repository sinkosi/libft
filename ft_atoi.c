/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:30:33 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/12 16:58:42 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strchk(const char *nptr)
{
	long	i;

	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	return (i);
}

int			ft_atoi(const char *nptr)
{
	long	result;
	long	sign;
	long	i;

	sign = 1;
	result = 0;
	if (*nptr == '\0')
		return (0);
	i = ft_strchk(nptr);
	if (nptr[i] == '-')
		sign = -1 * sign;
	while (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && (ft_isdigit(nptr[i + 1]) == 1))
	{
		if (ft_isdigit(nptr[i]) == 0)
			return (0);
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
			result = (result * 10) + (nptr[i] - 48);
			i++;
			if ((result < -2147483648) && sign == -1)
				return (0);
			else if ((result > 2147483647) && sign == 1)
				return (-1);
		}
	}
	return ((int)(sign * result));
}
