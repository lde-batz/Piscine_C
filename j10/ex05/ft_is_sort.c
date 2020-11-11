/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:12:19 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/23 16:55:09 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_return(int i, int length)
{
	if ((i + 1) == length)
		return (1);
	else
		return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length <= 2)
		return (1);
	while (f(tab[i], tab[i + 1]) == 0)
	{
		i++;
		if ((i + 1) == length)
			return (1);
	}
	if (f(tab[i], tab[i + 1]) < 0)
	{
		while (f(tab[i], tab[i + 1]) <= 0 && (i + 1) != length)
			i++;
		return (ft_return(i, length));
	}
	else
	{
		while (f(tab[i], tab[i + 1]) >= 0 && (i + 1) != (length))
			i++;
		return (ft_return(i, length));
	}
}
