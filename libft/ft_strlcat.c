/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:22:12 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:14:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *libft, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	libft_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	libft_len = ft_strlen(libft);
	if (size == 0)
		return (libft_len);
	if (size <= dst_len)
		return (libft_len + size);
	while (dst[i] != '\0')
		i++;
	while (libft[j] != '\0' && i < size - 1)
	{
		dst[i] = libft[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + libft_len);
}
