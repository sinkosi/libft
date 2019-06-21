/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 16:07:09 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/21 16:44:26 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(int nbr, int base)
{
	char		*str;
	size_t		len;

//	len = ft_numlen(nbr);
//	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
//		return (NULL);
	if (ft_isimin(nbr) == 1)
		return (ft_strcpy(str, "-2147483648"));
//	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0 && len >= 0)
	{
		str[len - 1] = ft_tochar(nbr % base);
		nbr /= base;
		len--;
	}
	return (str);
}
/*#include <stdio.h>

int		main(int argc, char **argv)
{
	printf("%s", ft_itoa_base(atoi(argv[1]), atoi(argv[2])));
	return(0);
}*/
