/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:57:13 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 10:57:15 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	index;

	index = 0;
	if (str == NULL)
		return (NULL);
	str = (char*)malloc(sizeof(size));
	while (size > 0)
	{
		str[index] = '\0';
		size--;
	}
	return (str);
}