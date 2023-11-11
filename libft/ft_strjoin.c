/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:06:23 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/22 10:06:26 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	new_s = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_s)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	return (new_s);
}
