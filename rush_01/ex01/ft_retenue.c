/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retenue.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 15:32:33 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 05:52:09 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_arborescence(char **tab, int lin, int col);
void	ft_print_tab(char **tab);

void	ft_retenue(char **tab, int lin, int col)
{
	if (col < 8)
		ft_arborescence(tab, lin, col + 1);
	else
	{
		if (lin < 8)
			ft_arborescence(tab, lin + 1, 0);
		else
			ft_print_tab(tab);
	}
}
