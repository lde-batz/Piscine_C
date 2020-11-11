/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:33:01 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/22 15:17:44 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	int		nb_c;
	char	*cop;

	nb_c = ft_strlen(src);
	cop = (char*)malloc(sizeof(*cop) * nb_c);
	i = 0;
	while (src[i] != '\0' && i < nb_c)
	{
		cop[i] = src[i];
		i++;
	}
	cop[i] = '\0';
	return (cop);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*tab_struct;

	if (!(tab_struct = malloc(sizeof(struct s_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		tab_struct[i].size_param = ft_strlen(av[i]);
		tab_struct[i].str = av[i];
		tab_struct[i].copy = ft_strdup(av[i]);
		tab_struct[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab_struct[i].str = 0;
	return (tab_struct);
}
