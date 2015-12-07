/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:55:54 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 20:36:48 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *temp;

	temp = (char *)malloc(sizeof(char *) * n);
	temp = ft_strncpy(temp, src, n);
	dst = (void *)ft_strncpy(dst, temp, n);
	free(temp);
	return (dst);
}