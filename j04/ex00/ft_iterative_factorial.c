/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:07:44 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/06 05:50:49 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if (nb == 0)
		fact = 1;
	if (nb < 0)
		fact = 0;
	while (nb >= 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
