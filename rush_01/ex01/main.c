/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaegelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:47:44 by rpaegelo          #+#    #+#             */
/*   Updated: 2018/08/12 15:04:34 by rpaegelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_arborescence(char **tab, int l, int c);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**tab;
	
	tab = (char**)malloc(sizeof(*tab) * 10);
	i = 0;
	while (i < 9)
	{
		tab[i] = (char*)malloc(sizeof(*tab) * 10);
		i++;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j <= 8)
		{
			tab[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
	ft_arborescence(tab, 0, 0);
}
