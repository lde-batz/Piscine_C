/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arborescence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:26:49 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 19:12:29 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_retenue(char **tab, int lin, int col, int *nb_tab);
int		ft_condition(char **tab, int lin, int col, int nb);

int		ft_arborescence(char **tab, int lin, int col, int *nb_tab)
{
	int nb;

	if (tab[lin][col] != '.')
	{
		ft_retenue(tab, lin, col, nb_tab);
	}
	else
	{
		nb = 0;
		while (nb < 9)
		{
			nb++;
			if (ft_condition(tab, lin, col, nb) == 1)
			{
				tab[lin][col] = nb + '0';
				ft_retenue(tab, lin, col, nb_tab);
			}
			if (nb == 9)
			{
				tab[lin][col] = '.';
			}
		}
	}
}
