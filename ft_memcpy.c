/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 14:53:15 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/05 11:47:48 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
/*
**	if (s1 == NULL || s2 == NULL)
**		return (NULL);
*/
	if (n == 0)
		return (s1);
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
