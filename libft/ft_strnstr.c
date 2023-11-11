/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 13:24:35 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/13 13:24:38 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	char	*ptr;

	i = 0;
	ptr = (char *)big;
	little_len = ft_strlen(little);
	if (little_len == 0 || big == little)
		return (ptr);
	while (ptr[i] != '\0' && i < len)
	{
		j = 0;
		while (ptr[i + j] != '\0' && little[j] != '\0'
			&& ptr[i + j] == little[j] && i + j < len)
			j++;
		if (j == little_len)
			return (ptr + i);
		i++;
	}
	return (0);
}
