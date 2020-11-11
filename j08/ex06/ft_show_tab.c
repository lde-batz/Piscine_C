/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:02:07 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/22 15:21:55 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void				ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void				ft_print_min(void)
{
	ft_putchar('-');
	ft_putchar(2 + '0');
	ft_putchar(1 + '0');
	ft_putchar(4 + '0');
	ft_putchar(7 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
	ft_putchar(3 + '0');
	ft_putchar(6 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
}

void				ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print_min();
	}
	else
	{
		if (nb >= 0 && nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');
				nb = -nb;
			}
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

void				ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		j = 0;
		while (par[i].tab[j] != 0)
		{
			ft_putstr(par[i].tab[j]);
			ft_putchar('\n');
			j++;
		}
		i++;
	}
}
