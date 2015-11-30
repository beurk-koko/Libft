/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:34:53 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 13:34:54 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*cat;
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s1[i])
		i++;
	while (s2[count])
		count++;
	str = (char*)malloc(sizeof(i) + count);
	cat = ft_strcat(s1, s2);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = cat[i];
		i++;
	}
	return (str);
}