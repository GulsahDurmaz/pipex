/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:33:51 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 14:42:06 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/*

	size_t	i;
	size_t	src_len;
	i = 0;
	if (!dst || !src)
		return (0);
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size < src_len)
		dst[size - 1] = '\0';
	else if (size != 0)
		dst[i] = '\0';
	return (src_len);
*/
/*
#include <string.h>
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	unsigned long	size;
	char	src[] = "abcdef";
	char	dst[] = "fed";
	size = 2;

	unsigned long   size2;
    char    src2[] = "abcdef";
    char    dst2[] = "fed";
    size2 = 2;

	printf("%zu \n", ft_strlcpy(dst, src, size));
	printf("%zu \n", strlcpy(dst2, src2, size2));
	return (0);
}
*/
