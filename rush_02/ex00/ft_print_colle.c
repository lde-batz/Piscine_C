/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_colle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:04:50 by alautier          #+#    #+#             */
/*   Updated: 2018/08/19 22:47:48 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_print_colle(int i, int w, int h, int results)
{
	if (results == 0)
		ft_putstr("aucune\n");
	if (results == 1)
	{
		ft_putstr("[colle0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(w);
		ft_putstr("] [");
		ft_putnbr(h);
		ft_putstr("]");
	}
	if (results > 1)
	{
		ft_putstr(" || ");
		ft_putstr("[colle0");
		ft_putnbr(i);
		ft_putstr("] [");
		ft_putnbr(w);
		ft_putstr("] [");
		ft_putnbr(h);
		ft_putstr("]");
	}
}
