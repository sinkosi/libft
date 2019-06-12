/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:21:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/12 13:33:25 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	full_size;
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	full_size = (i - dstsize - 1);
	if (full_size < dstsize)
		return (j + dstsize);
	else if (full_size > dstsize && dstsize > 0)
	{
		ft_strncat(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (i + j);
}
