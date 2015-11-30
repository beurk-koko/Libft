/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:34:35 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 13:34:48 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	if (start == 0 || len == 0)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * len);
	while (len > 0)
	{
		str[start] = s[start];
		start++;
		len--;
		if (len == 0 && str[start] != '\0')
			str[start] = '\0';
	}
	return (str);
}