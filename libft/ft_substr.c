/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:06:48 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/22 10:06:52 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	i;
	size_t	l_s;

	i = 0;
	l_s = ft_strlen(s);
	if (len == 0 || s[i] == '\0' || l_s < (size_t) start)
	{
		sub_s = malloc(1);
		if (!sub_s)
			return (0);
		sub_s[0] = '\0';
		return (sub_s);
	}
	if (len >= l_s || l_s < len + start)
		len = l_s - start;
	sub_s = (char *)malloc (sizeof(char) * (len + 1));
	if (!sub_s)
		return (0);
	while (i < len)
		sub_s[i++] = s[start++];
	sub_s[i] = '\0';
	return (sub_s);
}
