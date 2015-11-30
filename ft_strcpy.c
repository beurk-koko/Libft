/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:22:11 by chray             #+#    #+#             */
/*   Updated: 2015/11/24 13:28:42 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy (char *dst, const char *src)
{
	int	cpy;
	int	paste;

	cpy = 0;
	paste = 0;
	if (src[cpy] == '\0')
		return (NULL);
	while (src[cpy])
	{
		dst[paste] = src[dst];
		cpy++;
		paste++;
	}
	dst[paste] = '\0';
	return (*dst);
}

