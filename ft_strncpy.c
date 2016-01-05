/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 13:23:53 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:37:00 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = ft_strlen(src);
	while (src[i] && i < j && n != 0)
	{
		dst[i] = src[i];
		i++;
		n--;
	}
	while (n != 0)
	{
		dst[i] = '\0';
		i++;
		if (n != 0)
			n--;
	}
	return (dst);
}
