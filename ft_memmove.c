/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:51:43 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 15:41:19 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	/*size_t	i;
	unsigned char *s1;
	unsigned char *s2;

	i = 0;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s1 == '\0' && s2 == '\0')
		return (0);
	if (s1 > s2)
	{
		while (i < len)
		{
			s1[i] = s2[i];
			i++;
		}
	}*/
	if (dst == src)
		return (dst);
	dst = ft_memcpy(dst, src, len);
	return (dst);
}
