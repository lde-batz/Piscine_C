/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arborescence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:26:49 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 14:09:23 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_retenue(char **tab, int lin, int col);
int		ft_condition(char **tab, int lin, int col, int nb);

void	ft_arborescence(char **tab, int lin, int col)
{
	int nb;

	if (tab[lin][col] != '.')
	{
		printf("%c\n", tab[lin][col]);
		ft_retenue(tab, lin, col);
	}
	else
	{
		nb = 0;
		while (nb <= 9)
		{
			if (ft_condition(tab, lin, col, nb) == 1)
			{
				tab[lin][col] = nb + '0';
			//	printf("%c\n", tab[lin][col]);
				ft_retenue(tab, lin, col);
			}
			else
				if (nb == 9)
				{
					tab[lin][col] = '.';
				}
			nb++;
		}
	}
}
