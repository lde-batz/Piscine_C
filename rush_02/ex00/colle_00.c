/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:33:53 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 22:51:08 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	topline00(int x, char *str, int *size)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			str[*size] = 'o';
			size++;
		}
		else
		{
			str[*size] = '-';
			size++;
		}
		++i;
	}
	str[*size] = '\n';
	size++;
}

void	botline00(int x, char *str, int *size)
{
	int j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
		{
			str[*size] = 'o';
			size++;
		}
		else
		{
			str[*size] = '-';
			size++;
		}
		++j;
	}
	str[*size] = '\n';
	size++;
}

void	midline00(int x, char *str, int *size)
{
	int k;

	k = 1;
	while (k <= x)
	{
		if (k == 1 || k == x)
		{
			str[*size] = '-';
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

char	*colle_00(int x, int y)
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
			topline00(x, str, size);
		else
		{
			if (l == y)
				botline00(x, str, size);
			else
			{
				if (l != 1)
					midline00(x, str, size);
			}
		}
		++l;
	}
	return (str);
}
