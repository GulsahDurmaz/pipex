/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:49:01 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 12:11:56 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	int c1;
	int c2;
	int c3;

	char s[] = "Hello Berlin";
	c1 = 'e';
	c2 = 'l';
	c3 = 3;

	printf("%s \n", ft_strrchr(s, c1));
	printf("%s \n", strrchr(s, c1));
	printf("%s \n", ft_strrchr(s, c2));
    printf("%s \n", strrchr(s, c2));
	printf("%s \n", ft_strrchr(s, c3));
    printf("%s \n", strrchr(s, c3));
	return (0);
}
*/
