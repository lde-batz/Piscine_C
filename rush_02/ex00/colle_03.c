/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle_03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alautier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:40:03 by alautier          #+#    #+#             */
/*   Updated: 2018/08/19 23:04:02 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	high_line03(int x, char *str, int *size)
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
		else
		{
			str[*size] = 'B';
			size++;
		}
		++i;
	}
	str[*size] = '\n';
	size++;
}

void	down_line03(int x, char *str, int *size)
{
	int j;

	j = 1;
	while (j <= x)
	{
		if (j == 1)
		{
			str[*size] = 'A';
			size++;
		}
		if (j == x)
		{
			str[*size] = 'C';
			size++;
		}
		else
		{
			str[*size] = 'B';
			size++;
		}
		++j;
	}
	str[*size] = '\n';
	size++;
}

void	mid_line03(int x, char *str, int *size)
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

char	*colle_03(int x, int y)
{
	char	*str;
	int		l;
	int		*size;

	size = 0;
	l = 1;
	str = (char*)malloc(sizeof(char) * ((x * y) + (y + 1)));
	while (l <= y)
	{
		if (l == 1)
			high_line03(x, str, size);
		else
		{
			if (l == y)
				down_line03(x, str, size);
			else
				mid_line03(x, str, size);
		}
		++l;
	}
	str[*size] = '\0';
	return (str);
}
