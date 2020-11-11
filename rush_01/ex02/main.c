/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaegelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:47:44 by rpaegelo          #+#    #+#             */
/*   Updated: 2018/08/12 19:12:34 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_putchar(char c);
int		ft_arborescence(char **tab, int l, int c, int *nb_tab);

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	***tab;
	int		*nb_tab = 0;
	
	tab = (char***)malloc(sizeof(*tab) * 3);
	i = 0;
	while (i < 2)
	{
		tab[i] = (char**)malloc(sizeof(*tab) * 10);
		i++;
	}
	i = 0;
	while (i < 9)
	{
	  	j = 0;	
		while (j < 9)
		{
			tab[i] = (char*)malloc(sizeof(*tab) * 10);
			j++;
		}
		i++;
	}

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j <= 8)
		{
			if (argv[i][j] != '.' && (argv[i][j] < '1' && argv[i][j] > '9'))
			{
				ft_putchar('\n');
				return (0);
			}
			tab[i - 1][j] = argv[i][j];
			j++;
		}
		i++;
	}
	tab = ft_arborescence(tab, 0, 0, nb_tab);
	if (nb_tab == 1)
		ft_print_tab(tab);	
	else
		ft_putchar('\n');

}
