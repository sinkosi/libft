/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:14:51 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 16:05:07 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int i;
	char *a;

	i = 0;
	start++;
	a = ft_strnew(len);
	if (a == NULL)
		return (NULL);
	while (i < len)
	{
		a[i] = s[start]
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
