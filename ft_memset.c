/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:56:05 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:39:44 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*conv;

	if (len == 0)
		return (b);
	conv = b;
	while (len != 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		len--;
		b++;
	}
	return (conv);
}
