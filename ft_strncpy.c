/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:05:12 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/05 14:10:30 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(src) < len)
	{
		j = ft_strlen(dst);
		dst = ft_strcpy(dst, src);
		i = ft_strlen(src);
		while (i < j)
		{
			dst[i] = '\0';
			i++;
		}
	}
	while ((src[i] != '\0') && (i <= len))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
