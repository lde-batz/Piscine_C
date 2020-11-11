/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 16:36:27 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/05 16:55:22 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_min(void)
{
	ft_putchar('-');
	ft_putchar(2 + '0');
	ft_putchar(1 + '0');
	ft_putchar(4 + '0');
	ft_putchar(7 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
	ft_putchar(3 + '0');
	ft_putchar(6 + '0');
	ft_putchar(4 + '0');
	ft_putchar(8 + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_print_min();
	else
	{
		if (nb >= 0 && nb <= 9)
			ft_putchar(nb + '0');
		else
		{
			if (nb < 0)
			{
				ft_putchar('-');
				nb = -nb;
			}
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
