/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:28:33 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:25:57 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i] && s1[i] == '\0' && s2[i] == '\0')
			return (1);
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
