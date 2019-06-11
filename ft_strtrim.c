/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:14:31 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 10:59:29 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static size_t	check(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*a;

	i = ft_strlen(s);
	j = 0;
	k = 0;
	while (check(s[j] == 1))
		j++;
	while (check(s[i] == 1))
	{
		i--;
		k++;
	}
	i = (k + j);
	a = ft_strnew(i);
	 
	
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
}*/
