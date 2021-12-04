/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:40:47 by balysane          #+#    #+#             */
/*   Updated: 2021/11/13 17:17:50 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*st;

	st = (unsigned char *)s;
	a = (unsigned char)c;
	while (n)
	{
		if (*st == a)
			return (st);
		++st;
		--n;
	}
	return (0);
}
