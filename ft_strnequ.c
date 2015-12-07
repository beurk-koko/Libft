/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:28:48 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 12:28:50 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		index1;
	int		index2;

	index1 = 0;
	index2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while(s1[index1] == s2[index2] && n > 0)
	{
		index1++;
		index2++;
		n--;
	}
	if (s1[index1] != s2[index2])
		return (0);
	return (1);
}