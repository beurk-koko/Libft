/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:21:12 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:26:36 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*str;
	unsigned char	*c;

	i = 0;
	str = (unsigned char *)s1;
	c = (unsigned char *)s2;
	while (str[i] || c[i])
	{
		if (str[i] != c[i])
			return (str[i] - c[i]);
		i++;
	}
	return (0);
}
