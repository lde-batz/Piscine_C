/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:47:36 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/21 10:38:10 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_operator(int val1, int val2, char **av)
{
	if (ft_strcmp(av[2], "/"))
	{
		if (val2 != 0)
			ft_putnbr(val1 / val2);
		else
			ft_putstr("Stop : division by zero");
	}
	if (ft_strcmp(av[2], "+"))
		ft_putnbr(val1 + val2);
	if (ft_strcmp(av[2], "*"))
		ft_putnbr(val1 * val2);
	if (ft_strcmp(av[2], "-"))
		ft_putnbr(val1 - val2);
	if (ft_strcmp(av[2], "%"))
	{
		if (val2 != 0)
			ft_putnbr(val1 % val2);
		else
			ft_putstr("Stop : modulo by zero");
	}
}

int		main(int ac, char **av)
{
	int val1;
	int val2;

	if (ac == 4)
	{
		val1 = ft_atoi(av[1]);
		val2 = ft_atoi(av[3]);
		if (ft_strcmp(av[2], "+") || ft_strcmp(av[2], "-")
				|| ft_strcmp(av[2], "*") || ft_strcmp(av[2], "/")
				|| ft_strcmp(av[2], "%"))
			ft_operator(val1, val2, av);
		else
			ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
