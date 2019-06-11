/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:14:11 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 14:19:59 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_memsize(void *s1)
{
	char *str;
	unsigned int i;

	str = (char *)s1;
	i = 0;
	if (str == NULL)
		return (0);
	while (str)
		i++;
	return (i);
}
