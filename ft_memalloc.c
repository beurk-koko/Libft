/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:02 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:55:03 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	index;

	index = 0;
	if (size <= 65535)
	{
		mem = (char*)malloc(sizeof(size));
		if (mem == NULL)
			return (NULL);
		while (index < size)
		{
			mem[index] = '\0';
			index++;
		}
		return (mem);
	}
	else
		return (0);
}
