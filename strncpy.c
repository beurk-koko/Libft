/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:28:53 by chray             #+#    #+#             */
/*   Updated: 2015/11/24 13:37:20 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strncpy (char *dst, const char *src, size_t n)
{
	int	cpy;
	int	paste;

	cpy = 0;
	paste = 0;
	if (src[cpy] == '\0')
		return (NULL);
	while (n >= 0)
	{
		dst[paste] = src[cpy];
		cpy++;
		paste++;
		n--;
	}
	return (*dst);
}

