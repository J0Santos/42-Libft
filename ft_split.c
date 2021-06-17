/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josantos <josantos@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:30:00 by josantos          #+#    #+#             */
/*   Updated: 2021/02/22 16:21:22 by josantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			**freestring(char **s)
{
	size_t			a;

	a = 0;
	while (s[a])
	{
		free(s[a]);
		a++;
	}
	free(s);
	return (0);
}

static size_t		stringnumb(char const *s, char c)
{
	size_t			a;
	size_t			b;
	size_t			numb;

	a = 0;
	b = 0;
	numb = 0;
	while (s[a])
	{
		if (s[a] == c)
		{
			if (b != 0)
				numb++;
			b = 0;
		}
		else
			b++;
		a++;
	}
	return (numb + (b != 0 ? 1 : 0));
}

static void			createarray(const char *s, char c, size_t numb, char **p)
{
	size_t			a;
	size_t			b;
	size_t			len;
	char			*str;

	a = 0;
	b = 0;
	len = 0;
	while (a < numb)
	{
		if (s[b] == c || s[b] == '\0')
		{
			if (len != 0)
			{
				if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
					(freestring(p));
				ft_strlcpy(str, s + b - len, len + 1);
				p[a++] = str;
			}
			len = 0;
		}
		else
			len++;
		b++;
	}
}

char				**ft_split(char const *s, char c)
{
	size_t			a;
	char			**p;

	if (s == 0)
		return (NULL);
	a = stringnumb(s, c);
	if (!(p = (char **)malloc(sizeof(char *) * (a + 1))))
		return (0);
	createarray(s, c, a, p);
	p[a] = 0;
	return (p);
}
