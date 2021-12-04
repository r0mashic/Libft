/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:51:17 by balysane          #+#    #+#             */
/*   Updated: 2021/11/14 17:40:18 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*podstroka;
	size_t	i;
	size_t	dlina;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	dlina = 0;
	while (s[start + dlina] && dlina < len)
		dlina++;
	podstroka = (char *)malloc(dlina + 1);
	if (!podstroka)
		return (0);
	i = 0;
	while (len-- > 0 && s[start])
		podstroka[i++] = s[start++];
	podstroka[i] = '\0';
	return (podstroka);
}
