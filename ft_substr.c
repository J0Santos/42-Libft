/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 19:43:52 by josantos          #+#    #+#             */
/*   Updated: 2021/02/22 16:16:55 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	a;
	char	*p;

	a = 0;
	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
	{
		if (!(p = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (0);
	}
	else if (!(p = (char *)malloc(sizeof(char) * len + 1)))
		return (0);
	while (s[a] && a < len)
	{
		p[a++] = s[start++];
	}
	p[a] = '\0';
	return (p);
}
