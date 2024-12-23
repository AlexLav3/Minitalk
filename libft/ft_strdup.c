/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:13:27 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 02:14:00 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_strlen.c"

static char	*ft_strcpy(char *dest, const char *libft)
{
	unsigned int	i;

	i = 0;
	while (libft[i])
	{
		dest[i] = libft[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dst;

	dst = malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}

// int	main(void)
// {
// 	printf("%s", ft_strdup("dsgggfdfsdgf"));
// }
