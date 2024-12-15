/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:00:02 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:14:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *libft, size_t n)
{
	size_t	i;
	char	*char_ptr;
	char	*char_ptr2;

	i = 0;
	char_ptr = (char *)dest;
	char_ptr2 = (char *)libft;
	if (n == 0 || dest == libft)
	{
		return (dest);
	}
	while (i < n)
	{
		char_ptr[i] = char_ptr2[i];
		i++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char	dest[90] = "";
// 	char	libft[90] = "";
// 	char	dest2[90] = "";
// 	char	libft2[90] = "";

// 	ft_memcpy(dest, libft, 9);
// 	memcpy(dest2, libft2, 9);
// 	printf("%s", dest);
// 	printf("\n");
// 	printf("%s", dest2);
// }
