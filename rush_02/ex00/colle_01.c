/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:55:12 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 22:52:01 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	topline01(int x, char *str, int *size)
{
	int i;

	i = 0;
	str[*size] = '/';
	size++;
	while (i < x - 2)
	{
		str[*size] = '*';
		size++;
		++i;
	}
	if (x > 1)
	{
		str[*size] = '\\';
		size++;
	}
	str[*size] = '\n';
	size++;
}

void	botline01(int x, char *str, int *size)
{
	int j;

	j = 0;
	str[*size] = '\\';
	size++;
	while (j < x - 2)
	{
		str[*size] = '*';
		size++;
		++j;
	}
	if (x > 1)
	{
		str[*size] = '/';
		size++;
	}
	str[*size] = '\n';
	size++;
}

void	midline01(int x, char *str, int *size)
{
	int k;

	k = 1;
	while (k <= x)
	{
		if (k == 1 || k == x)
		{
			str[*size] = '*';
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

char	*colle_01(int x, int y)
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
			topline01(x, str, size);
		else
		{
			if (l == y)
				botline01(x, str, size);
			else
				midline01(x, str, size);
		}
		++l;
	}
	return (str);
}
