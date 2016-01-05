/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:07:34 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:11:22 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		neg;
	int		nb;

	neg = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\t' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
	{
		neg = neg * -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10;
		nb = nb + (*str - '0');
		str++;
	}
	return (neg * nb);
}
