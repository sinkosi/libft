/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:42:49 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/28 15:05:32 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	size_t j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == c)
		{
			i = j;
			j++;
		}
	}	
	while(s[i] != '\0')
	{
		if (s[i] == c || c == '\0')
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main(void)
{
	const char mystr[] = "WHY I The fuck is there a workshop, I mean really";
	int c = 'I';
	char *ptr;
	
	ptr = strrchr(mystr, c);
	printf("%s\n", ptr);
	
	ptr = ft_strrchr(mystr, c);
//	printf("%zx\n", ft_strlen(ptr));
	printf("%s\n", ptr);

	return (0);
}*/
