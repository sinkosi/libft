/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:15:32 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/04 16:55:17 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	control;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	control = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if(ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
	{
		control = (str1 - str2);
		if (ft_strlen(s1) && ft_strlen(s2))
			return (0);
		else if (ft_strlen(s1) == 0)
			return (control);
		else if (ft_strlen(s2) == 0)
			return (control);
	}
	while (i <= n && control == 0)
	{
		control = s1[i] - s2[i];
		i++;
	}
	return (control);
}
