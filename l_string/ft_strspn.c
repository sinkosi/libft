/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 12:13:40 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/25 12:34:37 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "l_string.h"

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t result;
	
	result = 0;
    while(*s && ft_strchr(charset,*s++))
		result++;
    return (result);    
}
