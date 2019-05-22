/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:39 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/22 12:50:55 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the file for FT_TOLOWER*/

#include "libft.h"
#include <stdlib.h>

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	else
		return c;
}
