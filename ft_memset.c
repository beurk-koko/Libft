/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:56:05 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:56:07 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*conv;
	size_t				i;

	i = 0;
	if (len == 0)
		return (b);
	conv = (unsigned char*) b;
	while (i < len)
	{
		*conv = (unsigned char) c;
		i++;
		conv++;
	}
	return (b);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_memset(av[1], 1, 40));
	return (0);
}
