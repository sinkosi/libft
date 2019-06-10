/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:58:35 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/10 15:56:08 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *s;
	size_t len;

	len = size + 1;
	s = (char *)malloc(sizeof(char) * len);
	if (!(s))
		return (NULL);
	ft_bzero(s, len);
	return (s);
}
