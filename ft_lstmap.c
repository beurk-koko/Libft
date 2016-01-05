/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chray <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:35:40 by chray             #+#    #+#             */
/*   Updated: 2015/12/15 18:20:40 by chray            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*new_elem;
	t_list	*prev;

	new = NULL;
	new = (*f)(lst);
	prev = new;
	lst = lst->next;
	while (lst)
	{
		new_elem = (*f)(lst);
		prev->next = new_elem;
		prev = new_elem;
		lst = lst->next;
	}
	prev->next = NULL;
	return (new);
}
