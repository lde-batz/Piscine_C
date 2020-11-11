/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 04:28:51 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/03 15:13:49 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_display(int a, int b, int c)
{
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a < 7)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	c++;
	return (c);
}

void	ft_trait(int a, int b, int c)
{
	while (a + b + c <= 24)
	{
		if (c <= 9)
		{
			c = ft_display(a, b, c);
		}
		else
		{
			if (b < 8)
			{
				b++;
			}
			else
			{
				a++;
				b = a + 1;
			}
			c = b + 1;
		}
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 1;
	c = 2;
	ft_trait(a, b, c);
}
