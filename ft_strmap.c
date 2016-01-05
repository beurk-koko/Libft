/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:05:49 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:33:00 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*cpy;
	size_t	i;

	i = ft_strlen(s);
	cpy = (char*)malloc(sizeof(*s) * i + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = f(s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
