/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:02:19 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/21 21:12:36 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

char	g_message[1024];

void	receive(int signal)
{
	static int	bit;
	static int	i;
	int			len;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	else if (signal == SIGUSR2)
		i &= ~(0x01 << bit);
	bit++;
	if (bit == 8)
	{
		len = ft_strlen(g_message);
		g_message[len] = i;
		if (i == '\0')
		{
			ft_printf("%s", g_message);
			ft_bzero(g_message, len);
		}
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	pid = getpid();
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	ft_putnbr_fd(pid, 1);
	signal(SIGUSR1, receive);
	signal(SIGUSR2, receive);
	while (argc == 1)
	{
		pause();
	}
	return (0);
}
