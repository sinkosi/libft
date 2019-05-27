/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:33:36 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/27 13:57:51 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int length;

	i = 0;
	length = (ft_strlen(s) + 1);
	while (i <= length)
	{
		if (s[i] == c)
		{
			return ((char *)s);
		}
		i++;
	}
	return (NULL);
}
