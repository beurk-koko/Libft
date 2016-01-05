/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:06:37 by chray             #+#    #+#             */
/*   Updated: 2015/11/24 18:27:26 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str;
	unsigned char	*c;
	int				i;

	i = 0;
	str = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while ((str[i] || c[i]) && n != 0)
	{
		if (str[i] != c[i])
			return (str[i] - c[i]);
		i++;
		n--;
	}
	return (0);
}
