/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:12:10 by chray             #+#    #+#             */
/*   Updated: 2015/11/26 15:12:12 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		index;

	index = 0;
	while (s[index] && c != s[index])
		index++;
	if (c != s[index])
		return(NULL);
	return ((char*) &s[index]);
}

#include <stdio.h>
int 	main(int ac, char **av)
{
	printf("%s\n", ft_strchr(av[1], 'l'));
	return (0);
}