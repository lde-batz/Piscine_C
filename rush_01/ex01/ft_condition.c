/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condition.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 14:26:21 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/12 15:01:34 by rpaegelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_ligne(char **tab, int lin, char nbc)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (tab[lin][j] == nbc)
			return (0);
		j++;
	}
	return (1);
}

int		ft_test_col(char **tab, int col, char nbc)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (tab[i][col] == nbc)
			return (0);
		i++;
	}
	return (1);
}

int		ft_test_reg(char **tab, int lin, int col, char  nbc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		while (j < 2)
		{
			if (tab[3 * (lin / 3) + i][3 * (col / 3) + j] == nbc)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_condition(char **tab, int lin, int col, int nb)
{
	int testl;
	int testc;
	int testr;
	char nbc;

	nbc = '0' + nb;
	testl = ft_test_ligne(tab, lin, nbc);
	testc = ft_test_col(tab, col, nbc);
	testr = ft_test_reg(tab, lin, col, nbc);
	return (testc);
}
