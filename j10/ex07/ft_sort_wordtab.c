/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:31:38 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/22 10:55:32 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char **s1, char **s2)
{
	char *swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0' && s2[x] == '\0')
			return (0);
		x++;
	}
	return (s1[x] - s2[x]);
}

void	ft_sort_wordtab(char **tab)
{
	int	nbr_word;
	int	i;
	int tri;

	nbr_word = 0;
	while (tab[nbr_word] != 0)
		nbr_word++;
	tri = 0;
	while (tri == 0)
	{
		tri = 1;
		i = 0;
		while (i < (nbr_word - 1))
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				tri = 0;
			}
			i++;
		}
		nbr_word--;
	}
}
