/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:09:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/24 10:27:51 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	i = 0;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) != 0)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	else if (ft_strlen(s1) != 0 && ft_strlen(s2) == 0)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	while (s1[i] && s2[i] && (unsigned char)ft_tolower(s1[i]) ==
			(unsigned char)ft_tolower(s2[i]) && i <= n)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
