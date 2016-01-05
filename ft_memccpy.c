/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:52:39 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:21:14 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n)
	{
		*((char *)dst) = *((char *)src);
		if (*((unsigned char *)src) == (unsigned char)c)
		{
			return (++dst);
		}
		dst++;
		src++;
		n--;
	}
	return (NULL);
}
