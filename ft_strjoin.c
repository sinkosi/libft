/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:13:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 11:26:32 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char *newStr;

	i = (ft_strlen(s1) + ft_strlen(s2));
	newStr = ft_strnew(i);
	if (s1 == '\0')
		return ((char *)s2);
	else if (s2 == '\0')
		return ((char *)s1);
	if(newStr == NULL)
		return (NULL);
	else
	{
		newStr = ft_strcat(newStr, s1);
		newStr = ft_strcat(newStr, s2);
		newStr = ft_strcat(newStr, "\0");
		return newStr;
	}
}
