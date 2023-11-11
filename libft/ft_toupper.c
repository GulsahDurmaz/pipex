/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:24:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 11:46:43 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*	The ternary operator:
	condition ? value_if_true : value_if_false
	return ((c >= 97 && c <= 122) ? (c - 32) : c);
*/
