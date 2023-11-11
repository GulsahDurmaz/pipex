/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:25:03 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 12:25:50 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
	*Ptr parametresi ile gösterilen bellek bölgesinin n parametre değeri 
	kadar ilk byte'ında c parametresi ile gösterilen değerin (unsigned 
	char olarak değerlendirilir) ilk geçtiği yeri arar ve bu bellek 
	adresini gösteren bir işaretçi geri döndürür.
	*Eğer ptr parametresi NULL bir işaretçi ise anlamsız bir sonuç 
	elde edilir.
*/