/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:32:12 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/21 16:18:24 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "l_ctype.h"

int	ft_isgraph(int c)
{
	if ((c > 32) && (c < 127))
		return (1);
	else
		return (0);
}
