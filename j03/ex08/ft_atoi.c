/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:49:27 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/04 16:00:50 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int x;
	int neg;
	int res;

	x = 0;
	neg = 0;
	res = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == 45 || str[x] == 43)
	{
		if (str[x] == 45)
			neg++;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		res = res * 10;
		res = res + (str[x] - 48);
		x++;
	}
	if (neg == 1)
		res = -res;
	return (res);
}