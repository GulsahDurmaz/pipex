/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:45:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/03 15:38:32 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 0 && ft_isdigit(c) == 0)
		return (0);
	else
		return (8);
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

	printf("char a= '1' => %d \n", isalnum(a));
	printf("ft_char a= '1' => %d \n", ft_isalnum(a));
	printf("char b= 'a' => %d \n", isalnum(b));
	printf("ft_char b= 'a' => %d \n", ft_isalnum(b));
	printf("int c= 1 => %d \n", isalnum(c));
	printf("ft_int c= 1 => %d \n", ft_isalnum(c));
	printf("char d= 'b'=> %d \n", isalnum(d));
	printf("ft_char d= 'b'=> %d \n", ft_isalnum(d));
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
