/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:56:55 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:57:03 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	max;

	i = 0;
	while (dst[i])
		i++;
	max = size - i - 1;
	len = ft_strlen(src) + i;
	if(size != 0 && max <= ft_strlen(src))
	{
		printf("test\n");
		dst = ft_strlen(dst) + dst;
		i = 0;
		while (i < max)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}