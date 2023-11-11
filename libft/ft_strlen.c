/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:25:51 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/04 13:43:57 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}
/*
#include <string.h>
int main(void)
{
	char str[] = "42 Berlin";
	printf("42 Berlin = %lu \n", strlen(str));
	printf("42 Berlin = %lu \n", ft_strlen(str));
	return(0);
}
*/
