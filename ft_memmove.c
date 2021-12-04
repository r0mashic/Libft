/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:55:29 by balysane          #+#    #+#             */
/*   Updated: 2021/11/13 17:18:03 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*kyda;
	unsigned char	*otkyda;

	kyda = (unsigned char *)dst;
	otkyda = (unsigned char *)src;
	if (kyda > otkyda)
		while (len-- != 0)
			kyda[len] = otkyda[len];
	else
		ft_memcpy(kyda, otkyda, len);
	return (kyda);
}
