/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:30 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:34:29 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*s_dst;
	const char	*s_src;
	size_t		p;

	p = 0;
	i = 0;
	s_src = src;
	s_dst = dst;
	while (n != 0)
	{
		s_dst[p] = s_src[i];
		i++;
		p++;
		n--;
	}
	return (dst);
}
