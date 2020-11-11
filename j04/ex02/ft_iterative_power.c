/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 07:28:58 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/06 05:51:35 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0 || nb == 0)
	{
		if (power == 0)
			res = 1;
		else
			res = 0;
	}
	else
	{
		if (power == 0)
			res = 1;
		while (power >= 1)
		{
			res = res * nb;
			power--;
		}
	}
	return (res);
}
