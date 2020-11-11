/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:21:44 by alautier          #+#    #+#             */
/*   Updated: 2018/08/19 23:09:50 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	high_line04(int x, char *str, int *size)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			str[*size] = 'A';
			size++;
		}
		if (i == x)
		{
			str[*size] = 'C';
			size++;
		}
		if (i != 1 && i != x)
		{
			str[*size] = 'B';
			size++;
		}
		++i;
	}
	str[*size] = '\n';
	size++;
}

void	down_line04(int x, char *str, int *size)
{
	int j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
		{
			str[*size] = 'C';
			size++;
		}
		if (j == x)
		{
			str[*size] = 'A';
			size++;
		}
		if (j != 1 && j != x)
		{
			str[*size] = 'B';
			size++;
		}
		++j;
	}
	str[*size] = '\n';
	size++;
}

void	mid_line04(int x, char *str, int *size)
{
	int k;

	k = 1;
	while (k <= x)
	{
		if (k == 1 || k == x)
		{
			str[*size] = 'B';
			size++;
		}
		else
		{
			str[*size] = ' ';
			size++;
		}
		++k;
	}
	str[*size] = '\n';
	size++;
}

char	*colle_04(int x, int y)
{
	int		l;
	char	*str;
	int		*size;

	size = 0;
	str = (char *)malloc(sizeof(char) * ((x * y) + y + 1));
	l = 1;
	while (l <= y)
	{
		if (l == 1)
			high_line04(x, str, size);
		else
		{
			if (l == y)
				down_line04(x, str, size);
			else
				mid_line04(x, str, size);
		}
		++l;
	}
	str[*size] = '\0';
	return (str);
}
