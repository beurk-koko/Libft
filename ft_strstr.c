/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:57:36 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:57:37 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	size;
	int	count;

	size = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char*)s1);
	count = 0;
	i = 0;
	while (s1[i])
	{
		while (s1[i + count] == s2[count])
		{
			if (count == size - 1)
				return ((char*)s1 + i);
			count++;
		}
		count = 0;
		i++;
	}
	return (NULL);
}