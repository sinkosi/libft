/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tostr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:54:57 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/07 15:23:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tostr(char s[], char c)
{
	s[0] = c;
	s[1] = '\0';
	return (s);
}
