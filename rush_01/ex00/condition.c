/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:26:21 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/11 17:31:08 by rpaegelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		test_ligne(char **tab, int l, int nb)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (tab[l][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int		test_col(char **tab, int c, int nb)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (tab[i][c] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		test_reg(char **tab, int l, int c, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		while (j < 2)
		{
			if (tab[3 * (l / 3) + i][3 * (c / 3) + j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_cdt(char **tab, int l, int c, int nb)
{
	int testl;
	int testc;
	int testr;

	testl = test_ligne(tab, l, nb);
	testc = test_col(tab, c, nb);
	testr = test_reg(tab, l, c, nb);
	return (testl * testc * testr);
}
