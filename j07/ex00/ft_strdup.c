/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 11:12:07 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/09 10:10:05 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(char *src)
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
