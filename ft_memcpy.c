/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:55:29 by balysane          #+#    #+#             */
/*   Updated: 2021/11/13 17:18:00 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*kyda;
	unsigned char	*otkyda;

	i = -1;
	kyda = (unsigned char *)dst;
	otkyda = (unsigned char *)src;
	if (n != 0 && dst != src)
		while (++i < n)
			kyda[i] = otkyda[i];
	return (kyda);
}
