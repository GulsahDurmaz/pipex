/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:24:16 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/11 15:56:25 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nb;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb = nb + (*str - '0');
		str++;
	}
	return (nb * sign);
}
/*
int main(void)
{
	printf(" --1236d= %d \n", atoi(" --1236"));
    printf(" --1236d= %d \n", ft_atoi(" --1236"));
	printf("---1236d= %d \n", atoi("---1236"));
    printf("---1236d= %d \n", ft_atoi("---1236"));
	printf("   1236= %d \n", atoi("   1236"));
	printf("   1236= %d \n", ft_atoi("   1236"));
    printf("  -1236= %d \n", atoi("  -1236"));
	printf("  -1236= %d \n", ft_atoi("  -1236"));
    printf("-1236= %d \n", atoi("-1236"));
	printf("-1236= %d \n",ft_atoi("-1236"));
    printf("1236-23= %d \n", atoi("1236-23 "));
	printf("1236-23= %d \n", ft_atoi("1236-23 "));
    printf("1236 -23= %d \n", atoi("1236 -23"));
	printf("1236 -23= %d \n", ft_atoi("1236 -23"));
	printf("+1236 -23= %d \n", atoi("+1236 -23"));
    printf("+1236 -23= %d \n", ft_atoi("+1236 -23"));

	return (0);
}
*/
