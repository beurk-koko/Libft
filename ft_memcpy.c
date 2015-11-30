/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:30 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:55:32 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cpy;
	unsigned char	*paste;
	size_t			p;
	
	p = 0;
	i = 0;
	if (n == 0)
		return (dst);
	cpy = (unsigned char*) src;
	paste = (unsigned char*) dst;
	while (i < n)
	{
		paste[p] = cpy[i];
		i++;
		p++;
	}
	return (dst);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", memcpy(av[1], av[2], 0));
	return (0);
}
