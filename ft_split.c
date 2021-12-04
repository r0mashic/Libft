/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:58:17 by balysane          #+#    #+#             */
/*   Updated: 2021/11/14 20:12:53 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_count(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		t;
	char		*str;
	char		**massiv;

	if (!s)
		return (0);
	t = ft_count((char *)s, c);
	massiv = (char **)malloc(sizeof(char *) * (t + 1));
	if (!massiv)
		return (0);
	str = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (str != s)
				*(massiv++) = ft_substr(str, 0, s - str);
			str = (char *)s + 1;
		}
		s++;
	}
	if (str != s)
		*(massiv++) = ft_substr(str, 0, s - str);
	*massiv = 0;
	return (massiv - t);
}
