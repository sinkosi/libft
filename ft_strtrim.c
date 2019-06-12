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
	while (check(s[j] == 1) && s[j] != '\0')
		j++;
	if (j == i)
	{
		return ("");
	}
	while (check(s[i] == 1))
	{
		i--;
		k++;
	}
	i = (k + j);
	a = ft_strnew(i);
	i = 0;
	if (a == NULL)
		return (NULL);
	while ((i + j) < (ft_strlen(s) - k))
	{
		a[i] = s[j];
		i++;
	}
	a[i] = '\0';
	return (a);
}
