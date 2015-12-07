/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:26:00 by chray             #+#    #+#             */
/*   Updated: 2015/12/02 16:26:03 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_pos(int n)
{
	int i;

	i = 1;
	while (n > 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int		count_neg(int n)
{
	int i;

	i = 2;
	while (n < -10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_negitoa(char *str, int i, int n)
{
	str = (char*)malloc(sizeof(str) * i);
	str[i] = '\0';
	n = n * -1;
	while (i > 1)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	i -= i;
	str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	
	if (n < 0)
	{
		i = count_neg(n);
		str = ft_negitoa(str, i, n);
		return (str);
	}

	i = count_pos(n);
	str = (char*)malloc(sizeof(str) * i);
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
