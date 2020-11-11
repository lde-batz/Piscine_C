/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:39:37 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/06 07:18:37 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb < 13)
	{
		if (nb == 0)
			return (1);
		else
		{
			nb = nb * ft_recursive_factorial(nb - 1);
			if (nb > 2147483647)
				return (0);
			else
				return (nb);
		}
	}
	else
		return (0);
}
