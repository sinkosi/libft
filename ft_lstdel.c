/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sinkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:03:14 by sinkosi           #+#    #+#             */
/*   Updated: 2019/06/24 16:52:51 by sinkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*mylist;

	if (del == NULL)
		return (NULL);
	else
		while (*alst != NULL)
		{
			mylist = (*alst)->next;
			del(mylist->content, mylist->content_size);
			free(mylist);
			
		}
	*(alst) = NULL;
}
