/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:23:14 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 17:04:53 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	*Src parametresi ile gösterilen bellek bölgesindeki karakterleri, 
	n parametre değeri kadar uzunlukta, dest parametresindeki bellek 
	bölgesine kopyalar.
	*Eğer dest veya src parametrelerinden birisi NULL bir işaretçi ise, 
	belirsiz sonuçlar elde edilir.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_tmp;
	char	*src_tmp;

	dst_tmp = (char *)dst;
	src_tmp = (char *)src;
	if (dst == src)
		return (dst);
	if (src_tmp < dst_tmp)
	{
		while (len--)
			*(dst_tmp + len) = *(src_tmp + len);
		return (dst);
	}
	while (len--)
		*dst_tmp++ = *src_tmp++;
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
	size_t	len;
	char 	src[] = "Hello";
	char	dst[] = "Be";
	
	len = 5;
	ft_memmove(dst, src, len);
	printf("%s \n", dst);
	return(0);
}	
*/
