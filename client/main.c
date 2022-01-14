/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:40:11 by nburat-d          #+#    #+#             */
/*   Updated: 2022/01/14 17:07:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/client.h"

int received = 0;

void handler1()
{
	return ;
}

void handler2()
{
	ft_putstr("Message send\n");
}

int main(int ac, char **av)
{
	pid_t pid;
	
	signal(SIGUSR1, handler1);
	signal(SIGUSR2, handler2);
	
	if (ac == 3)
	{
		pid = ft_atoi(av[1]);
		send_str(av[2], pid);
	}
	return (0);
}