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
	char			*str;
	unsigned int	i;

	i = 0;
	if (start == 0 || len == 0)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * len + 1);
	while (len + 1 > 0)
	{
		str[i] = s[start];
		start++;
		i++;
		if ((len - 1) == 0 && str[start] != '\0')
			str[start] = '\0';
		len--;
	}
	return (str);
}
