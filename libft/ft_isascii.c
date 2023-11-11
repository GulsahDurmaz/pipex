/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:45:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/11 18:33:49 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
int main(void)
{
	char a;
	char b;
	int c;
	char d;

	
	a = '1';
	b = 'a';
	c = 1;
	d = 'b';

	printf("char a= '1' => %d \n", isascii(a));
	printf("ft_char a= '1' => %d \n", ft_isascii(a));
	printf("char b= 'a' => %d \n", isascii(b));
	printf("ft_char b= 'a' => %d \n", ft_isascii(b));
	printf("int c= 1 => %d \n", isascii(c));
	printf("ft_int c= 1 => %d \n", ft_isascii(c));
	printf("char d= 'b'=> %d \n", isascii(d));
	printf("ft_char d= 'b'=> %d \n", ft_isascii(d));
	return(0);
}
*/
/*
checks  for an alphabetic character; in the standard "C" locale,
              it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
              cales, there may be additional characters for which isalpha() is
              true—letters which are neither uppercase nor lowercase.
RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
*/
