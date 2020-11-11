/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retenue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:32:33 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 19:12:10 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_arborescence(char **tab, int lin, int col, int *nb_tab);
void	ft_print_tab(char **tab);

void	ft_retenue(char **tab, int lin, int col, int *nb_tab)
{
	if (col < 8)
		ft_arborescence(tab, lin, col + 1);
	else
	{
		if (lin < 8)
			ft_arborescence(tab, lin + 1, 0);
		else
			nb_tab++;
			tab[1] = tab[0];
	}
}
