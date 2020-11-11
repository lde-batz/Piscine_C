/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:30:48 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/16 11:26:22 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strcat_n(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dest[i] = '\n';
	i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*dest;
	int		len;

	len = 0;
	i = 1;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	if (argc < 2)
	{
		dest[0] = '\0';
		return (dest);
	}
	dest = argv[1];
	i = 2;
	while (i < argc)
	{
		dest = ft_strcat_n(dest, argv[i]);
		i++;
	}
	return (dest);
}
