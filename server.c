/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:02:19 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/16 20:01:32 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void	receive(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	else if (signal == SIGUSR2)
		i &= ~(0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}
//pause waits for signal
int	main(int argc, char **argv)
{
	int pid;

	pid = getpid();
	(void)argv;
	if (argc != 1)
	{
		ft_printf("Error\n");
		return (0);
	}
	ft_putnbr_fd(pid, 1);
	while (argc == 1)
	{
		signal(SIGUSR1, receive);
		signal(SIGUSR2, receive);
		pause();
	}
	return (0);
}