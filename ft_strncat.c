/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:10:23 by chray             #+#    #+#             */
/*   Updated: 2015/11/25 16:10:25 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	while (s1[count])
		count++;
	while (n > 0)
	{
		s1[count] = s2[index];
		index++;
		count++;
		n--;
	}
	s1[count] = '\0';
	return(s1);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	printf("%s\n", ft_strncat(av[1], av[2], 0));
	return (0);
}