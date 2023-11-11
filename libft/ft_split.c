/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:20:49 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/11/07 11:42:58 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_count_words(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str != c)
		{
			i++;
			while (*str && *str != c)
				str++;
		}
		else
			str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	ret = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!ret)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			ret[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}

/*
int main()
{
	char *str = "  tripouille  42  ";
	char **tab = ft_split(str, ' ');
	int counter = 0;
	int i = 0;
	counter = ft_count_words(str, ' ');

	while ( i < counter)
	{
		printf("%s \n", tab[i]);
		i++;
	}
	return(0);
}
*/
