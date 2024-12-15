/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elavrich <elavrich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 02:02:10 by elavrich          #+#    #+#             */
/*   Updated: 2024/12/15 22:09:47 by elavrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

//signals sent are integers
void	send(int signbr, char c)
{
	int	bytes;

	bytes = 0;
	while (bytes < 8)
	{
		if (c == 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR1);
		bytes++;
	}
}

int	main(int argc, char *argv[])
{
	int pid;

	pid = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
	}
}