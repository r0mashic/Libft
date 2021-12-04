/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:32:59 by balysane          #+#    #+#             */
/*   Updated: 2021/11/15 15:06:36 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (set[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	len;

	if (!s1)
		return (0);
	start = 0;
	while (s1[start] && ft_check(s1[start], set))
		start++;
	len = ft_strlen(s1);
	while (len > start && ft_check(s1[len - 1], set))
		len--;
	str = (char *)malloc(sizeof(*s1) * (len - start + 1));
	if (!str)
		return (0);
	i = 0;
	while (start < len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
