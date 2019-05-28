/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:35:32 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/28 15:10:39 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i <= (len-1))
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) <= len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *largestring = "Foo Bar Baz Bitch";
	const char *smallstring = "Bar";
	char *ptr;
	int i = -1;

	ptr = ft_strnstr(largestring, smallstring, i);
	printf("OUTPUT: '%s'\n", ptr);
	ptr = strnstr(largestring, smallstring, i);
	printf("OUTPUT: '%s'\n", ptr);
	return (0);
}*/
