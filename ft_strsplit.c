/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:55:29 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/12 09:00:05 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchr(char a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

char	**ft_strsplit(char const *s, char c)
{
	char *a;
	size_t i;
	size_t j;
	size_t start;
	size_t end;
	char **table;

	i = 0;
	j = 0;
	start = 0;
	end = 0;
	table = 0;
	while (s[i] != '\0')
	{
		while(checkchr(s[i], c) == 1 && s[i] != '\0')
				i++;
		//This is where function finds first letter of first word.
		start = i;
		start = end;
		while (checkchr(s[i], c) == 0 && s[i] != '\0')
		{
			i++;
			end++;
		}
		//finds the last letter of the first word
		a = ft_strnew(end - start);
		while (start < end)
		{
			a[j] = s[start];
			start++;
		}
	}
//	table[0][] = a;
	return (table);
}
		//This returns the string. The function could also be prototyped
		//using ft_strsub(s, start, (end - start))
	
	//The next aim of this, is to put it into a table.
	//This needs a two-point variable 
/*	}	
}*/
