/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:35:01 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 13:35:02 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtim(char const *s)
{
	int		i;
	int		count;
	char	*str;
	
	i = 0;
	while (s[i])
		i++;
	str = (char*)malloc(sizeof(s) * i);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != ',' || s[i] != '\t' || s[i] != '\n' || s[i] != ' ')
		{
			str[count] = s[i];
			count++;
		}
		i++;
	}
	return (str);
}