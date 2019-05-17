/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 11:31:15 by sinkosi           #+#    #+#             */
/*   Updated: 2019/05/17 11:31:24 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is the file for FT_ISALPHA*/

#include "libft.h"
#include <stdlib.h>

int ft_isalpha(int c)
{       
        if (ft_isupper(c) || ft_islower(c))
                return (1);
}
