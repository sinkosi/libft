/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tochar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:17:34 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/03 15:46:07 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tochar(int n)
{
	char a;
	
	a = 0;
	if (ft_isdigit(n))
		a = (n + (48));
	return (a);
	
}
