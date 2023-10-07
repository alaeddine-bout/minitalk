/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:32:05 by about             #+#    #+#             */
/*   Updated: 2023/01/29 19:17:06 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	clientsend(int pid, char *msg)
{
	int	i;

	while (*msg)
	{
		i = 8;
		while (i--)
		{
			if (*msg >> i & 1)
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(0);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					exit(0);
			}
			usleep(120);
		}
		msg++;
	}
}

int	main(int ac, char **av)
{
	t_id	pid;
	char	*msg;

	if (ac != 3)
	{
		ft_putstr("Enter PID And String !!");
		exit(1);
	}
	if (av[1] <= 0)
	{
		ft_putstr("Invalid Pid !!");
		exit(1);
	}
	pid.pid = ft_atoi(av[1]);
	msg = av[2];
	clientsend(pid.pid, msg);
}
