/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:12:56 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 22:52:46 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	high_line02(int x, char *str, int *size)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			str[*size] = 'A';
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

void	down_line02(int x, char *str, int *size)
{
	int j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
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

void	mid_line02(int x, char *str, int *size)
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

char	*colle_02(int x, int y)
{
	int		l;
	int		*size;
	char	*str;

	size = 0;
	str = (char*)malloc(sizeof(char) * (x * y + y + 1));
	l = 1;
	while (l <= y)
	{
		if (l == 1)
			high_line02(x, str, size);
		else
		{
			if (l == y)
				down_line02(x, str, size);
			else
			{
				if (l != 1)
					mid_line02(x, str, size);
			}
		}
		++l;
	}
	return (str);
}
