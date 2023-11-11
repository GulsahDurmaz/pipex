/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:45:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/11 18:33:22 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	else
		return (0);
}
/*
int main(void)
#include <ctype.h>
{
	char a;
	char b;
	int c;
	char d;

	
	a = '1';
	b = 'a';
	c = 1;
	d = 'b';

	printf("char a= '1' => %d \n", isdigit(a));
	printf("ft_char a= '1' => %d \n", ft_isdigit(a));
	printf("char b= 'a' => %d \n", isdigit(b));
	printf("ft_char b= 'a' => %d \n", ft_isdigit(b));
	printf("int c= 1 => %d \n", isdigit(c));
	printf("ft_int c= 1 => %d \n", ft_isdigit(c));
	printf("char d= 'b'=> %d \n", isdigit(d));
	printf("ft_char d= 'b'=> %d \n", ft_isdigit(d));
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
