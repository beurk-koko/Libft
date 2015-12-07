/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:56:55 by chray             #+#    #+#             */
/*   Updated: 2015/12/01 19:19:17 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		i++;
	while (src[j])
		j++;
	len = i + j;
	k = size - i - 1;
	if (i != size)
	{
		j = 0;
		while (src[j] && j < k)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (len);
}