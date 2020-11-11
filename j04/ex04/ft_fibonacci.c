/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 07:36:30 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/05 08:55:28 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
	{
		if (index == 0 || index == 1)
			return (index);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
