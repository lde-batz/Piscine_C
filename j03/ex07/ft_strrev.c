/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 06:15:59 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/04 12:48:00 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		min;
	int		max;
	char	swap;

	min = 0;
	max = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	max--;
	while (max - min > 0)
	{
		swap = str[max];
		str[max] = str[min];
		str[min] = swap;
		min++;
		max--;
	}
	return (str);
}
