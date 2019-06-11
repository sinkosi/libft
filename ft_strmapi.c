/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:09:55 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 16:36:35 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*str;
	unsigned int n;

	i = 0;
	j = ft_strlen(s);
	str = ft_strnew(j);
	n = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		((f)(n, str[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}
