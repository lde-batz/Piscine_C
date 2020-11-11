/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:58:28 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 22:35:14 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		width(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

int		height(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*read_stdin(void)
{
	char	buff[1];
	int		i;
	int		ret;
	char	*tab;

	tab = malloc(sizeof(*tab));
	i = 0;
	while ((ret = read(0, buff, BUFFER_SIZE)))
	{
		if (ret == 0)
			return ("aucune\n");
		tab[i] = buff[0];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
