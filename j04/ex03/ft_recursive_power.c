/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 05:59:22 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/06 04:38:40 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || nb == 0)
	{
		if (power == 0)
			return (1);
		else
			return (0);
	}
	else
	{
		if (power == 0)
		{
			return (1);
		}
		else
		{
			return (ft_recursive_power(nb, (power - 1)) * nb);
		}
	}
}
