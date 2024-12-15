/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 19:58:10 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:14:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *libft, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (libft[j])
		j++;
	if (size == 0)
		return (j);
	while (libft[i] && i < (size - 1))
	{
		dst[i] = libft[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
