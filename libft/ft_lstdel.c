/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aallali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 14:52:22 by aallali           #+#    #+#             */
/*   Updated: 2018/10/23 17:22:30 by aallali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;
	t_list *list;

	list = *alst;
	if (!alst || !del)
		return ;
	while (list != NULL)
	{
		tmp = list->next;
		del(list->content, list->content_size);
		list = tmp;
	}
	free((*alst)->next);
	(*alst)->next = NULL;
	free(*alst);
	*alst = NULL;
	return ;
}
