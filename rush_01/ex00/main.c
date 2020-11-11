/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaegelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 17:47:44 by rpaegelo          #+#    #+#             */
/*   Updated: 2018/08/12 14:09:18 by rpaegelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		condition(char **tab, int l, int c, int nb);

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int	**tab;ZZ

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (j <= 8)
		{
			ft_putchar(argv[i][j]);
			if (j < 8)
			{
				ft_putchar(' ');
			}
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	printf("%d\n", condition(tab,  ,  , );
}
