/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:05:49 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 11:06:03 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	 char	*cpy;
	 size_t	index;

	 if (s == NULL || f == NULL)
	 	return (NULL);
	 cpy = (char*)malloc(sizeof(*s) * (ft_strlen(s)));
	 if (cpy == NULL)
	 	return (NULL);
	 index = 0;
	 while (cpy[index])
	 {
	 	f(cpy[index]);
	 	index++;
	 }
	 return (cpy);
}