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
	
	if (!s)
		return (NULL);
	i = 0;
	count = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[count] == ' ' || s[count] == '\n' || s[count] == '\t')
		count--;
	str = ft_strsub(s, i, (count - i + 1));
	return (str);
}