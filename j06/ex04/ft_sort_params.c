/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 09:44:36 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/07 11:53:42 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		ft_putchar(str[c]);
		c++;
	}
}

int		ft_swapp(int argc, char **argv, int i)
{
	int j;
	int k;
	int pos_min;

	pos_min = i;
	j = i + 1;
	while (j <= argc - 1)
	{
		k = 0;
		while (argv[j][k] == argv[pos_min][k])
			k++;
		if (argv[j][k] < argv[pos_min][k])
			pos_min = j;
		j++;
	}
	return (pos_min);
}

int		main(int argc, char **argv)
{
	int		i;
	int		pos_min;
	char	*swap;

	i = 1;
	if (argc == 1)
		return (0);
	while (i <= argc - 2)
	{
		pos_min = ft_swapp(argc, argv, i);
		swap = argv[i];
		argv[i] = argv[pos_min];
		argv[pos_min] = swap;
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	ft_putstr(argv[i]);
	ft_putchar('\n');
	return (0);
}
