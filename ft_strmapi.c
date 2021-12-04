/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 22:49:46 by balysane          #+#    #+#             */
/*   Updated: 2021/11/14 19:50:44 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*k;

	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	k = ft_strdup(s);
	if (!k)
		return (0);
	i = 0;
	while (s[i])
	{
		k[i] = (*f)(i, s[i]);
		i++;
	}
	return (k);
}
