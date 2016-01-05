/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:26:00 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 19:11:34 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_pos(int n)
{
	int i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static int		count_neg(int n)
{
	int i;

	i = 2;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static char		*ft_negitoa(char *str, int i, int n)
{
	n = n * -1;
	i = count_neg(n);
	str = (char*)malloc(sizeof(*str) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	str[i] = '-';
	return (str);
}

static char		*ft_positoa(char *str, int i, int n)
{
	i = count_pos(n);
	str = (char *)malloc(sizeof(*str) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i >= 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;

	str = NULL;
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		str = ft_negitoa(str, i, n);
	if (n >= 0)
		str = ft_positoa(str, i, n);
	return (str);
}
