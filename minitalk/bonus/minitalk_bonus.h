/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: about <about@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:17:14 by about             #+#    #+#             */
/*   Updated: 2023/01/29 19:16:51 by about            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include<unistd.h>
# include<stdlib.h>
# include<signal.h>

typedef struct t_id {
	int	pid;
}	t_id;

void	ft_putstr(char *s);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_atoi(const char *str);
void	ft_putchar(char p);

#endif