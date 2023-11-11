/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:42:35 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/27 19:42:41 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	*lst: The node to free.
	del: The address of the function used to delete
	the content
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
