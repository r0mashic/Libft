/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:38:31 by balysane          #+#    #+#             */
/*   Updated: 2021/11/13 17:19:10 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int	size;
	int	i;

	if (!*need)
		return ((char *)hay);
	size = ft_strlen(need);
	while (*hay && len)
	{
		i = 0;
		while (*hay && hay[i] == need[i] && len - i)
		{
			if (i + 1 == size)
				return ((char *)hay);
			i++;
		}
		hay++;
		len--;
	}
	return (0);
}
