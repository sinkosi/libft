/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:15:09 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/05 10:33:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (dst == src)
		return (0);

	char *myptr;
	size_t i;
	
	i = 0;
	myptr = dst;
	while (i <= n)
	{
		if (myptr[i] == c)
			return (myptr);
		i++;
	}
	return (NULL);
}
