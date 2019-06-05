/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:15:09 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/05 14:59:54 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	if (dst == src)
		return (0);

	char *ptr1;
	char *ptr2;
	char *mydst;
	size_t i;
	unsigned char a;
	
	i = 0;
	a = (unsigned char)c;
	ptr1 = dst;
	mydst = ptr1;
	ptr2 = (char *)src;
	while (i <= n)
	{
		if (ptr2[i] == a)
		{
			i++;
			while (mydst[i] != '\0')
			{
				ptr1[i] = mydst[i];
				i++;
			}
			return (ptr1);
		}
		ptr1[i] = ptr2[i];
		i++;
	}
	return (ptr1);
}
