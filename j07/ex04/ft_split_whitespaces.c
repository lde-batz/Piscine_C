/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 01:46:57 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 11:42:31 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cnt_word(char *str)
{
	int i;
	int nbr_word;

	i = 0;
	nbr_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		else
		{
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
					&& str[i] != '\0')
				i++;
			nbr_word++;
		}
	}
	return (nbr_word);
}

void	ft_malloc_word(char *str, char **tab)
{
	int i;
	int cnt_char;
	int cnt_word;

	i = 0;
	cnt_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		else
		{
			cnt_char = 0;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
					&& str[i] != '\0')
			{
				i++;
				cnt_char++;
			}
			tab[cnt_word] = malloc(sizeof(tab) * (cnt_char + 1));
			cnt_word++;
		}
	}
	tab[cnt_word] = malloc(sizeof(tab));
}

void	ft_putword_tab(char *str, char **tab)
{
	int i;
	int cnt_char;
	int cnt_word;

	i = 0;
	cnt_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		else
		{
			cnt_char = 0;
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t'
					&& str[i] != '\0')
			{
				tab[cnt_word][cnt_char] = str[i];
				i++;
				cnt_char++;
			}
			tab[cnt_word][cnt_char] = '\0';
			cnt_word++;
		}
	}
	tab[cnt_word] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	if (!(tab = malloc(sizeof(*tab) * (ft_cnt_word(str) + 1))))
		return (0);
	ft_malloc_word(str, tab);
	ft_putword_tab(str, tab);
	return (tab);
}
