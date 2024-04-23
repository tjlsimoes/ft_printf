/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjorge-l <tjorge-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:00:43 by tjorge-l          #+#    #+#             */
/*   Updated: 2024/04/23 13:00:36 by tjorge-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		j;

	va_start(args, format);
	j = format_traversal((char *)format, args);
	va_end(args);
	return (j);
}
// #include "ft_printf.h"

// int get_nbr_specifiers(char *format)
// {
// 	int i;
// 	int count;

// 	count = 0;
// 	i = 0;
// 	while (format[i])
// 	{
// 		if (format[i] == '%' && percent_spe_q(format, i))
// 			count++;
// 		i++;
// 	}
// 	return (count);
// }
