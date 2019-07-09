/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:52:14 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/09 14:52:16 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "l_ctype.h"

int	ft_ispunct(int c)
{
	if ((ft_isgraph(c) == 1) && (ft_isalnum(c) == 0))
		return (1);
	else
		return (0);
}
