/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:52:37 by chray             #+#    #+#             */
/*   Updated: 2015/11/26 15:52:39 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index])
		index++;
	while (index >= 0 && c != s[index])
	{
		index--;
		if (c == s[index])
			return ((char *) &s[index]);
	}

	return (NULL);
}

#include <stdio.h>
int 	main(int ac, char **av)
{
	printf("%s\n", ft_strrchr(av[1], 'l'));
	return (0);
}