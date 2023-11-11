/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:52:43 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 15:53:21 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	*Deletes and frees the given node and every
	successor of that node, using the function ’del’
	and free(3).
	Finally, the pointer to the list must be set to
	NULL.

	*lst: The address of a pointer to a node.
	*del: The address of the function used to delete
	the content of the node.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		ft_lstclear(&(*lst)->next, del);
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
