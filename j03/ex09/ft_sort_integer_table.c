/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 17:11:39 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/04 18:40:14 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int swap;
	int x;
	int y;

	printf("%d", 1);
	y = 2;
	while (y < size - 2)
	{
		x = 0;
		while (x < size - y)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab[x];
				tab[x] = tab[x + 1];
				tab [x + 1] = swap;
			}
			x++;
		}
		y++;
	}
	x = 0;
	while (x < size)
	{
		printf("%d", tab[x]);
		x++;
	}
}

int main(void)
{
	int *tab[5];

	*tab[0] = 5;
	*tab[1] = 3;
	*tab[2] = 4;
	*tab[3] = 1;
	*tab[4] = 2;
	printf("%d", 1);
	ft_sort_integer_table(tab[0], 5);
	return (0);
}
