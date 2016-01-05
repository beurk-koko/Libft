/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:16 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:31:29 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;

	chr = (unsigned char *)s;
	if (n != 0)
	{
		while (n > 0)
		{
			if (*chr == (unsigned char)c)
				return (chr);
			chr++;
			n--;
		}
	}
	return (NULL);
}
