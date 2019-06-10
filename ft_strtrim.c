/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:14:31 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 16:55:50 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*a;

	i = ft_strlen(s);
	j = 0;
	if (s[0] == ' ' || s[0] == '\n' || s[0] == '\t')
		j++;
	else if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		j++;
	if (j == 0)
		return ((char *)s);
	a = ft_strnew(i - j);
	if (a == NULL)
		return (NULL);
	j = 0;
	while ((s[0] == ' ' || s[0] == '\n' || s[0] == '\t') && j < i)
	{
		a[j] = s[j+1];
	}
	return (a);
}
