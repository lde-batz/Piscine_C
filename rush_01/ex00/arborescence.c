/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arborescence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:26:49 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/11 18:51:57 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**arborescence(char **tab, int lin, int col, int good)
{
	while(lin < 8 && col < 8)
	{
		if (tab[lin][col] != '.')
		{
			if (col < 8)
				arborescence(sud, lin, col + 1, good);
			else
			{
				if (lin < 8)
					arborescence(sud, lin + 1, 0, good);
				else
					return (tab);
			}
		}
		else
		{
			nb = 0;
			while (condition(tab, lin, col, nb) == 0 )
			{
				if (nb < 9)
					nb++;
				else
				{
					
				}		
			}
		}
	}
