/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 19:21:28 by chray             #+#    #+#             */
/*   Updated: 2015/11/30 19:21:30 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i]);
		i++;
	}
	ft_putchar_fd('\n');
}