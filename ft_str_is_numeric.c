/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 16:49:03 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/21 16:56:10 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_str_is_numeric(char *str)
{
	size_t	i;
	int		control;

	control = 1;
	i = 0;
	while (str[i] != '\0' && control == 1)
	{
		control = (ft_isdigit(str[i]));
		i++;
	}
	return (control);
}
