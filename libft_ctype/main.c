/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/02 14:11:42 by sinkosi           #+#    #+#             */
/*   Updated: 2019/07/02 14:17:40 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_ctype.h"
#include "unistd.h"

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(void)
{
	char a;

	a = 'a';
	if (ft_islower(a) == 1)
		ft_putchar(a);
	else
		ft_putchar('1');
	return (0);
}
