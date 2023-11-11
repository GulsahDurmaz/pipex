/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:25:14 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/08/11 13:27:34 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_strcmp function compares the two strings 's1' and 's2' and returns an
integer indicating the result of the comparison, as follows:
	• 0, if the s1 and s2 are equal;
	• a negative value if s1 is less than s2;
	• a positive value if s1 is greater than s2.*/
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
