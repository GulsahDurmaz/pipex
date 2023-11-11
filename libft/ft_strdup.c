/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:10:31 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/04/05 15:39:56 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
	{
		return (0);
	}
	dest = ft_memcpy(dest, src, len);
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char *src = "Hello!";

	printf("%s \n", ft_strdup(src));
	printf("%s \n", strdup(src));
	return (0);
}
*/
/*DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is
       longer than n, only n bytes are copied, and  a  terminating  null  byte
       ('\0') is added.

       strdupa() and strndupa() are similar, but use alloca(3) to allocate the
       buffer.  They are available only when using the GNU GCC suite, and suf‐
       fer from the same limitations described in alloca(3).

RETURN VALUE
       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.

	void *malloc(size_t size);
	void free(void *ptr);

*/
