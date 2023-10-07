/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 02:56:53 by about             #+#    #+#             */
/*   Updated: 2023/01/29 20:48:39 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	signal_handler(int sign)
{
	static char	p;
	static char	i;

	p = p | (sign == SIGUSR1);
	if (++i == 8)
	{
		i = 0;
		ft_putchar(p);
		p = 0;
	}
	else
		p = p << 1;
}

void	ft_loop(void)
{
	while (1)
	{
		pause();
	}
}

int	main(int ac, char **av)
{
	t_id	pid;

	(void)av;
	if (ac != 1)
	{
		write(2, "Error :", 7);
		exit(1);
	}
	pid.pid = getpid();
	ft_putstr("this is the PID --> ");
	ft_putnbr(pid.pid);
	ft_putchar('\n');
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	ft_loop();
}
