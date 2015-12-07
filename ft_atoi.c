/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:07:34 by chray             #+#    #+#             */
/*   Updated: 2015/12/01 18:00:52 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		ret;
	int		neg;

	i = 0;
	ret = 0;
	neg = 1;
	if (str[0] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		if (ret != 0)
			ret *= 10;
		ret += str[i] - '0';
		i++;
	}
	if (neg == -1)
		ret *= neg;	
	return (ret);
}