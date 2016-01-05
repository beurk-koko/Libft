/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:33:07 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:21:59 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*area1;
	const unsigned char	*area2;
	int					i;

	area1 = (unsigned char *)s1;
	area2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (area1[i] != area2[i])
			return (area1[i] - area2[i]);
		i++;
		n--;
	}
	return (0);
}
