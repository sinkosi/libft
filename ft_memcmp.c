/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:45:21 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/08 15:46:01 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*str1;
	char			*str2;
	size_t			i;
	unsigned char	control;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	control = ((unsigned char)str1[i] - (unsigned char)str2[i]);
	if (i > n)// || n < ft_strlen(s1)
		return (0);
	while (i <= n)// && control == 0)
	{
		control += ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (control);
}
