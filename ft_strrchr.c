/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:52:37 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:39:05 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;
	size_t		len;

	len = ft_strlen(s);
	str = (char *)s + len;
	while (len + 1 > 0)
	{
		if (c == *str)
			return (str);
		str--;
		len--;
	}
	return (NULL);
}
