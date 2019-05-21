/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:15:32 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/21 10:30:36 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int control;

	i = 0;
	control = 0;
	while (s1 != '\0' && s2 != '\0')
	{
		while ((control == 0) && (i <= n))
		{
			control = s1[i] - s2[i];
			i++;
		}
		return (control);
	}
}
