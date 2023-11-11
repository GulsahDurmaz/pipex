/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 18:38:32 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/11 18:39:46 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dstsize == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	else
	{
		while (src[j] && (dst_len + j) < dstsize)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize && dst_len < dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
		return (src_len + dst_len);
	}
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_length;
	size_t	src_length;

	if(!dst || !src)
		return(0);
	i = 0;
	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (dst_length == 0)
		return(src_length);
	if (size - 1 < dst_length)
		return (src_length + size);
	while (size > 0 && *src && dst_length + i < size - 1)
	{
		dst[dst_length + i] = src[i];
		i++;
	}
	dst[dst_length + i] = '\0';
	if (dst_length >= size)
		return(size + src_length);
	return (dst_length + i);
}
*/
/*
#include <bsd/string.h>

int main()
{
	unsigned int size;
	char src[] = "World!";
	char dst[] = "Hello ";
	size = 10;

//	printf("%zu \n", strlcat(dst, src, size));
	printf("%zu \n", ft_strlcat(dst, src, size));
//  printf("%zu \n", strlcat(dst, src, sizeof(dst)));
	return(0);	
}
*/