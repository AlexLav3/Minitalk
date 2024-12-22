/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:02:10 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/22 18:30:35 by elavrich         ###   ########.fr       */
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
		usleep(350);
	}
}

void	partial(int pid, int argc, char *argv[])
{
	int	k;
	int	i;

	k = 2;
	i = 0;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i])
		{
			send_bits(pid, argv[k][i]);
			i++;
		}
		send_bits(pid, ' ');
		k++;
	}
	send_bits(pid, '\0');
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	k;

	k = 2;
	pid = 0;
	if (argc > 2)
	{
		pid = ft_atoi(argv[1]);
		partial(pid, argc, argv);
	}
	else
		return (ft_printf("Error\n"), 1);
	return (0);
}
