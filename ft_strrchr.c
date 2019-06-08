/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:42:49 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/08 15:31:32 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = ft_strlen(s);
	k = -1;
	if (j == 0)
		return (NULL);
	if (ft_isascii(c) == 0)
		return (NULL);
	while (i <= j)
	{
		if (c == s[i])
		{
			k = i;
		}
		i++;
	}
	if (k >= 0)
		return ((char *)s + k);
	return (NULL);
}
