/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 19:42:27 by chray             #+#    #+#             */
/*   Updated: 2015/12/01 19:42:28 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s)
	{
		while (s && s[i])
		{
			if (s[i] != c)
				count++;
			while (s[i] != c)
				i++;
			i++;
		}
	}
	return (count);
}

size_t		ft_size_word(char const *s, size_t start, char c)
{
	size_t		i;

	i = 0;
	while (s[i + start] != c && s[i + start])
		i++;
	return (i);
}

size_t		ft_filltab(char ***tab, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while ((s[i] == c) && s[i])
				i++;
		}
		if (s[i] != c)
		{
			if (ft_size_word(s, i, c) != 0)
			{
				(*tab)[j++] = ft_strsub(s, i, ft_size_word(s, i, c));
				i += ft_size_word(s, i, c);
			}
		}
	}
	return (j);
}
char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t		i;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = ft_filltab(&tab, s, c);
	tab[i] = NULL;
	return (tab);
}