/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:58:59 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/08 16:06:46 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s_tmp;
	size_t			i;

	i = 0;
	s_tmp = (unsigned char *)s;
	while (i < n)
	{
		s_tmp[i] = 0;
		i++;
	}
	s = s_tmp;
}

/*
#include <string.h>
int	main(void)
{
	int	i;
	int	j;
	char s1[] = "Welcome to the 42 Berlin";
	char s2[] = "Welcome to the 42 Berlin";

	bzero(s1, 5);
	i = 0;
	while (i < 30)
	{
		putchar(s1[i]);
		i++;
	}
	
	putchar('\n');	

	ft_bzero(s2, 5);
    j = 0;
    while (j < 30)
    {
        putchar(s2[j]);
        j++;
    }
	
	putchar('\n');

	return (0);
}
*/
/*	#include <strings.h>
DESCRIPTION
       The  bzero()  function  erases the data in the n bytes of 
	   the memory starting at the location pointed to by s, 
	   by writing zeros (bytes containing
       '\0') to that area.
RETURN VALUE
       None.
*/
