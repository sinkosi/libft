/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 07:52:19 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/24 12:39:12 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(char const *s, const char *c)
{
	size_t	i;

	i = 0;
	while (s[i] == c[i] && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_rcheck(char const *s, const char *c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s) - 1;
	while (s[j] == c[j] && j >= 0)
	{
		j--;
		i++;
	}
	return (i);
}
char	*ft_strtok(char *str, const char *delim)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*s;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str);
	j = 0;
	k = 0;
	j = ft_check(str, delim); 
	if (j == i)
	{
		return ("");
	}
	k = ft_rcheck(s, delim);
	s = ft_strnew(i - j - k);
	if (s == NULL)
		return (NULL);
	s = ft_strsub(str, j, (i - j - k));
	return (s);
}
