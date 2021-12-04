/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balysane <balysane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 19:38:37 by balysane          #+#    #+#             */
/*   Updated: 2021/11/13 18:06:03 by balysane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				znak;
	unsigned int	vivod;

	znak = 1;
	vivod = 0;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			znak = -1;
	while (*str >= '0' && *str <= '9')
		vivod = vivod * 10 + *str++ - '0';
	if (vivod > 2147483647 && znak == 1)
		return (-1);
	else if (vivod > 2147483648 && znak == -1)
		return (0);
	return ((int)(znak * vivod));
}
