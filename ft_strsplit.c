/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:55:29 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/15 15:20:02 by sinkosi          ###   ########.fr       */
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
	size_t	outter;
	size_t	inner;
	char	*str;
	char	**ptopntr;

	if (s == NULL)
		return (NULL);
	outter = 0;
	inner = 0;
	str = (char*)s;
	str = ft_strltrim(str, c);
	ptopntr = (char **)malloc(sizeof(char *) * ft_numwrds(str, c));
	if (ptopntr == NULL)
		return (NULL);
	while (str[inner] != '\0')
	{
		while (str[inner] != c || str[inner] != '\0')
			inner++;
		ptopntr[outter] = ft_strsub(str, 0, inner);
		outter++;
		ft_putendl(str);
		ft_strltrim(str, c);
	}
	ptopntr[outter] = NULL;
	return (ptopntr);
}
