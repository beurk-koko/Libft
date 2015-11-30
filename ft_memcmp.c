/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 20:33:07 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:33:24 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;
	size_t			index1;
	size_t			index2;

	index1 = 0;
	index2 = 0;
	if (s1 == s2 || n == 0)
		return (0);
	cmp1 = (unsigned char*)s1;
	cmp2 = (unsigned char*)s2;
	while (index1 <= n)
	{
		if (cmp1[index1] != cmp2[index2])
			return (cmp1[index1] - cmp2[index2]);
		index1++;
		index2++;
	}
	return (0);
}
