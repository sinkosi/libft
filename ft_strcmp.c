/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/30 09:25:53 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;
	size_t control;

	i = 0;
	control = 0;
	if (ft_strlen(s1) == 0 && ft_strlen(s2) != 0)
	{
		return (1);
	}
	else if (ft_strlen(s1) != 0 && ft_strlen(s2) == 0)
	{
		return (1);
	}
	while ((s1[i] != '\0' && s2[i] != '\0') && control == 0)
	{
		control = ((s1[i]) - (s2[i]));
		i++;
	}
	return (control);
}
