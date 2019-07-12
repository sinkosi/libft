/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 08:18:40 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/24 08:18:48 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "l_math.h"

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}