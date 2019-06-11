/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:30:10 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/11 14:32:02 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void *s1, void *s2)
{
	void *temp;
	unsigned int i;
	unsigned int j;

	i = ft_memsize(s1);
	j = ft_memsize(s2);
	if (i >= j)
	{
		j = i;
	}
	temp = ft_strnew(j);
	if (temp == NULL)
		return ;
	ft_memcpy(temp, s2, j);
	ft_memcpy(s1, temp, j);
	free(temp);
}
