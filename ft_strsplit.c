/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:55:29 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/18 10:35:41 by sinkosi          ###   ########.fr       */
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
//	char	*str;
	char	**ptopntr;
	size_t	i;

	if (s == NULL)
		return (NULL);
	outter = 0;
	inner = 0;
	i = 0;
//	str = (char*)s;
	//ft_putendl("BREAK POINT 1");
//	str = ft_strltrim(s, c);
//	ft_putnbr(ft_numwrds(s, c));
	ptopntr = (char **)malloc(sizeof(char *) * ft_numwrds(s, c));
	//ft_putendl("BREAK POINT 2");
	if (ptopntr == NULL)
		return (NULL);
//	ft_putendl("BREAK POINT 3");
//	ft_putchar('\n');
	while (s[inner] != '\0')
	{
		//ft_putendl("BREAK POINT 4");
		
		i = inner;
		while (s[i] == c && s[i] != '\0')
			i++;
		inner = i + 1;
		while (s[inner] != c && inner < ft_strlen(s))
			inner++;
//		ft_putendl("BREAK POINT 5");
/*		ft_putnbr(i);
		ft_putchar('\n');
		ft_putnbr(inner);
		ft_putchar('\n');
		ft_putendl(ft_strsub(s, i, inner - i + 1));
		ft_putnbr(inner - i);
		ft_putchar('\n');*/
		//ft_putendl(str);

//		i = inner;
//		free(inner);
	//	inner ++;
/*		ptopntr[outter] = ft_strsub(str, i, inner);
		outter++;
		ft_putendl(ptopntr[outter]);
		ft_strltrim(str, c);*/
	}
	ptopntr[outter] = NULL;
	return (ptopntr);
}
