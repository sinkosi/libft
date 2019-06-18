/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:55:29 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/18 17:02:38 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numwrds(char const *s, char c)
{
	size_t	i;
	size_t	control;

	i = 1;
	control = 0;
	while (s[i] != '\0' && ft_strlen(s) > i)
	{
		if (s[i] == c && s[i - 1] != c)
			control++;
		i++;
	}
	return (control + 1);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**ptopntr;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	ptopntr = (char **)malloc(sizeof(char *) * ft_numwrds(s, c));
	if (ptopntr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && i < ft_strlen(s))
			i++;
		j = i;
		while (s[i] != c && i < ft_strlen(s))
			i++;
		if (i > j)
		{
			ptopntr[k] = ft_strsub(s, j, i-j);
			k++;
		}
	}
	ptopntr[k] = NULL;
	return (ptopntr);
}
