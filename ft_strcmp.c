/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/05 13:38:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;
	size_t control;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	control = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) != 0)
	{
		control = (str1 - str2);
		return (control);
	}
	else if (ft_strlen(s1) != 0 && ft_strlen(s2) == 0)
	{
		control = (str1 - str2);
		return (control);
	}
	while ((str1[i] != '\0' && str2[i] != '\0') && control == 0)
	{
		control = ((int)(str1[i] - str2[i]));
		i++;
	}
	return (control);
}
