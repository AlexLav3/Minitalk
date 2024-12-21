/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:02:10 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/21 21:10:58 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void	send_bits(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit++;
		usleep(250);
	}
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	i;
	int	k;

	k = 2;
	i = 0;
	pid = 0;
	if (argc > 2)
	{
		pid = ft_atoi(argv[1]);
		i = 0;
		while (k < argc)
		{
			while (argv[k][i++])
				send_bits(pid, argv[k][i]);
			send_bits(pid, ' ');
			i = 0;
			k++;
		}
		send_bits(pid, '\0');
	}
	else
		return (ft_printf("Error\n"), 1);
	return (0);
}
