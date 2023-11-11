/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:58:59 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 17:05:14 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	*C parametresi ile gösterilen bellek bölgesindeki karakteri (unsigned char),
	dest parametresindeki bellek bölgesinin ilk n parametre değeri kadar 
	byte'ına kopyalar.
	*Eğer dest parametresi NULL bir işaretçi ise, belirsiz sonuçlar elde edilir.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	pointer = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*pointer++ = c;
		i++;
	}
	return (s);
}
/*
#include <string.h>
int	main(void)
{
	char s1[] = "Welcome to the 42 Berlin";
	int c = '*';
	char s2[] = "Welcome to the 42 Berlin";
    int d = '*';


	memset(s1, c, 15);
	puts(s1);
	ft_memset(s2, d, 15);
	puts(s2);
	return (0);
}
*/
