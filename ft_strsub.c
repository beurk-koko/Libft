/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:34:35 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:40:18 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char*)malloc(sizeof(*s) * len + 1);
	if (str == NULL)
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start];
		start++;
		i++;
		if ((len) == 0 && str[start] != '\0')
			str[start] = '\0';
		len--;
	}
	str[i] = '\0';
	return (str);
}
