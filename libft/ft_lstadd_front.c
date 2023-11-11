/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 19:42:03 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/27 19:42:09 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	This function lets us add a new element to the front of an existing list.
	*set the new element's next address to point 
 	* to the start of the existing list
	*set the existing list pointer to point to the new element
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst || new)
	{
		if (*lst)
			new -> next = *lst;
		*lst = new;
	}
}
