/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:34:48 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/17 11:34:49 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the file for FT_TOUPPER*/

#include "libft.h"
#include <stdlib.h>

int ft_toupper(int c)
{
	if (ft_isupper(c))
		return (c - 22);
	else
		return c;
}
