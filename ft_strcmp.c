/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:11:22 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/21 16:13:01 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int control;

	i = 0;
	control = 0;
	while (s1 != '\0' && s2 != '\0')
	{
		while (control == 0)
		{
			control = s1[i] - s2[i];
			i++;
		}
	}
	return (control);
}
