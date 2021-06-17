/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:14:35 by josantos          #+#    #+#             */
/*   Updated: 2021/02/23 17:59:34 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = p;
	}
}
