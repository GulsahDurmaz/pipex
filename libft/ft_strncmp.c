/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:51:45 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/11 18:51:51 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	unsigned int n;

	char s1[] = "Hello";
	char s2[] = "";
	n = 5;

	printf("%d \n", strncmp(s1, s2, n));
	printf("%d \n", ft_strncmp(s1, s2, n));
	return(0);
}
*/
