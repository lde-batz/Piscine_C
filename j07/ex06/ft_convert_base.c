/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:10:27 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/16 17:37:31 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_find_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
			j++;
		i++;
	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base_to, char *nbr_to, int *size)
{
	int base_to_int;

	base_to_int = ft_find_base(base_to);
	if (nbr < base_to_int)
	{
		nbr_to[*size] = base_to[nbr];
		*size += 1;
	}
	else
	{
		ft_putnbr_base(nbr / base_to_int, base_to, nbr_to, size);
		ft_putnbr_base(nbr % base_to_int, base_to, nbr_to, size);
	}
	nbr_to[*size] = '\0';
	return (nbr_to);
}

int		ft_conversion(char *str, char *base, int base_int, int size_of)
{
	int res;
	int i;
	int j;
	int neg;

	res = 0;
	i = 0;
	neg = 0;
	while (i <= size_of)
	{
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[0] == '-')
				neg++;
			i++;
		}
		j = 0;
		while (str[i] != base[j])
			j++;
		res = res * base_int + j;
		i++;
	}
	if (neg)
		return (-res);
	return (res);
}

int		ft_atoi_base(char *str, char *base_from)
{
	int *res;
	int base_from_int;
	int size_of;

	res = (int*)malloc(sizeof(*res) * 11);
	base_from_int = ft_find_base(base_from);
	size_of = 0;
	while (str[size_of] != '\0')
		size_of++;
	size_of--;
	return (ft_conversion(str, base_from, base_from_int, size_of));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_from;
	char	*nbr_to;
	int		base_to_int;
	int		i;

	if (!(nbr_to = (char*)malloc(sizeof(*nbr_to) * 33)))
		return (0);
	nbr_from = ft_atoi_base(nbr, base_from);
	base_to_int = ft_find_base(base_to);
	if (nbr_from < 0)
	{
		i = 1;
		nbr_to[0] = '-';
		nbr_from = -nbr_from;
		nbr_to = ft_putnbr_base(nbr_from, base_to, nbr_to, &i);
	}
	else
	{
		i = 0;
		nbr_to = ft_putnbr_base(nbr_from, base_to, nbr_to, &i);
	}
	return (nbr_to);
}
