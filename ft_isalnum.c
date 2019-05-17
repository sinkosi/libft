/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:30:55 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/17 11:30:59 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the file for FT_ISALNUM*/

#include "libft.h"
#include <stdlib.h>

int ft_isalnum(int c)
{       
        if (ft_isalpha(c) || ft_isdigit(c))
                return (1);
}
