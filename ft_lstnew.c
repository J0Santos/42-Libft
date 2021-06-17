/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:40:15 by josantos          #+#    #+#             */
/*   Updated: 2021/02/24 11:18:53 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *p;

	p = (t_list *)malloc(sizeof(t_list));
	if (p == NULL)
		return (0);
	p->content = content;
	p->next = NULL;
	return (p);
}
