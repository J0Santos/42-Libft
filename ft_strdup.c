/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:41:44 by josantos          #+#    #+#             */
/*   Updated: 2021/02/19 19:41:18 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	const char	*p;
	int			a;

	a = 0;
	if ((p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == 0)
		return (0);
	while (s1[a])
	{
		((char *)p)[a] = ((char *)s1)[a];
		a++;
	}
	((char *)p)[a] = '\0';
	return ((char *)p);
}
