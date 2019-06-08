/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:33:36 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/08 15:32:41 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(s);
	if (j == 0)
		return (NULL);
	if (ft_isascii(c) == 0)
		return (NULL);
	while (i <= j)
	{
		if (c == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
