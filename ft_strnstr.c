/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:57:23 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:57:25 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char*s2, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	count;

	size = 0;
	count = 0;
	i = 0;
	while (s2[size])
		size++;
	if (size == 0)
		return ((char *)s1);
	while (s1[i])
	{
		while (s1[i + count] == s2[count] && s1[i] && s2[count])
		{
			if (count + 1 == len)
				return ((char*) s1 + i);
			count++;
		}
		count = 0;
		i++;
	}
	return (NULL);
}