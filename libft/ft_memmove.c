/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:09 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:14:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *libft, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dest == libft)
		return (dest);
	if (dest > libft)
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(char *)(dest + i) = *(char *)(libft + i);
		}
	}
	else
	{
		while (i < n)
		{
			*(char *)(dest + i) = *(char *)(libft + i);
			i++;
		}
	}
	return (dest);
}
// int main()
// {
// 	char dest[90] = "kkkk";
// 	char libft[90] = "gdgfdg";
// 	ft_memmove(dest, libft, 8);
// 	printf("%s", dest);
// }
