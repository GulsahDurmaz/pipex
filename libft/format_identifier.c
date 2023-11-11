/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_identifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <gdurmaz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:19:14 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/08/18 16:24:57 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	format_identifier(const char format, va_list args)
{
	int	length;

	length = 0;
	if (format == 'c' || format == '%')
	{
		if (format == 'c')
			length += print_char(va_arg(args, int), format);
		if (format == '%')
			length += print_char('%', '%');
	}
	if (format == 's')
		length += print_str(va_arg(args, char *));
	if (format == 'x' || format == 'X')
		length += print_hex(va_arg(args, unsigned int), format);
	if (format == 'p')
		length += print_ptr(va_arg(args, void *), format);
	if (format == 'd' || format == 'i')
		length += print_dec(va_arg(args, int));
	if (format == 'u')
		length += print_unsigned_int(va_arg(args, unsigned int));
	return (length);
}
