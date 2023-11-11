/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:24:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 11:48:09 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	while (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*	The ternary operator:
	condition ? value_if_true : value_if_false
	return ((c >= 65 && c <= 90) ? c + 32 : c);
*/
