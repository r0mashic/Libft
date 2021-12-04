/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:48:47 by balysane          #+#    #+#             */
/*   Updated: 2021/11/14 20:00:13 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_znak(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static	int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = ft_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	while (n != '\0')
	{
		res[--len] = ft_znak(n % 10) + '0';
		n /= 10;
	}
	return (res);
}
