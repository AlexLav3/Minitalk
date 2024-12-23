/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chosehex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:20:39 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:12:50 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_chosehex(int n, const char *format)
{
	int	count;

	count = 0;
	if (ft_c(format) == 'x')
		count += ft_hexlower(n, format);
	else
		count += ft_hexupper(n, format);
	return (count);
}
