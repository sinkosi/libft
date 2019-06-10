/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:59:49 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 11:35:37 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;
	
//	s = (void *)malloc(sizeof(size));
	s = malloc(size);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
