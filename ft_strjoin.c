/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:13:58 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 16:04:13 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char    *str;

	i = (ft_strlen(s1) + ft_strlen(s2));
	str = ft_strnew(i);
	if (s1 == '\0')
		return ((char *)s2);
	else if (s2 == '\0')
		return ((char *)s1);
	if (str == NULL)
		return (NULL);
	else
	{
		str = ft_strcat(str, s1);
		str = ft_strcat(str, s2);
		str = ft_strcat(str, "\0");
		return (str);
	}
}
