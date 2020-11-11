/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:31:51 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/16 09:57:14 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
