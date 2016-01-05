/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:54 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:23:48 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*s_dst;
	char	*s_src;

	s_src = (char *)src;
	s_dst = (char *)dst;
	if (s_src <= s_dst)
	{
		s_dst += n - 1;
		s_src += n - 1;
		while (n != 0)
		{
			*s_dst = *s_src;
			s_dst--;
			s_src--;
			n--;
		}
	}
	else
		dst = ft_memcpy(dst, src, n);
	return (dst);
}
