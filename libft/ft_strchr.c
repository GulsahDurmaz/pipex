/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 11:49:01 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 12:18:20 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
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

	printf("%s \n", ft_strchr(s, c1));
	printf("%s \n", strchr(s, c1));
	printf("%s \n", ft_strchr(s, c2));
    printf("%s \n", strchr(s, c2));
	printf("%s \n", ft_strchr(s, c3));
    printf("%s \n", strchr(s, c3));
	return (0);
}
*/
/*
	s parametresi ile gosterilen karakter dizisinde c parametresi
	ile gosterilen degerin ilk gectigi zeri arar ve bu bellek
	adresini gosteren bir isaretci geri dondurur.

	Eger s parametresi sonu bos karakter olan bir karakter
	dizisini gosteren isaretci degilse anlamsiz bi sonuc elde
	edilir.

	c: Aranacak olan degeri gosterir. Deger int olarak verilir.
	Ancak fonksiyon bu degeri unsigned char bir degere cevirerek
	islem yapar.

	Return: s parametre degeri ile gosterilen karakter dizisinde
	bulunan ilk c parametres degerinin bellek adresini gosteren 
	bir isaretci geri dondurur. Deger bulunmazsa, NULL bir isaretci
	geri dondurur.
*/