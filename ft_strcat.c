/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:28:57 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:46:32 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	count;
	int	index;

	index = 0;
	count = 0;
	while (s1[count])
		count++;
	while (s2[index])
	{
		s1[count] = s2[index];
		count++;
		index++;
	}
	s1[count] = '\0';
	return (s1);
}
