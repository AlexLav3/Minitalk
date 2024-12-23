/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:25:05 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:12:50 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_c(const char *format)
{
	if (*format == '%' && *(format + 1) == 'd')
		return ('d');
	if (*format == '%' && *(format + 1) == 's')
		return ('s');
	if (*format == '%' && *(format + 1) == 'i')
		return ('i');
	if (*format == '%' && *(format + 1) == '%')
		return ('%');
	if (*format == '%' && *(format + 1) == 'c')
		return ('c');
	if (*format == '%' && *(format + 1) == 'p')
		return ('p');
	if (*format == '%' && *(format + 1) == 'u')
		return ('u');
	if (*format == '%' && *(format + 1) == 'x')
		return ('x');
	if (*format == '%' && *(format + 1) == 'X')
		return ('X');
	return ('\0');
}
