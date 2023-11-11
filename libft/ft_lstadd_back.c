/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:54:31 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 15:54:34 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	*lst: The address of a pointer to the first link of
	a list.
	*new: The address of a pointer to the node to be
	added to the list.
	*Adds the node ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		tmp = ft_lstlast(*lst);
		tmp->next = &*new;
	}
}
