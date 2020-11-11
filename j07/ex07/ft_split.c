/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 13:51:35 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 12:01:03 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cond(char *str, int i, char *charset)
{
	int j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (charset[j] == str[i])
			return (0);
		j++;
	}
	return (1);
}

int		ft_cnt_word(char *str, char *charset)
{
	int i;
	int nbr_word;

	i = 0;
	nbr_word = 0;
	while (str[i] != '\0')
	{
		if (ft_cond(str, i, charset) == 0)
			i++;
		else
		{
			while (ft_cond(str, i, charset) == 1 && str[i] != '\0')
				i++;
			nbr_word++;
		}
	}
	return (nbr_word);
}

void	ft_malloc_word(char *str, char **tab, char *charset)
{
	int i;
	int cnt_char;
	int cnt_word;

	i = 0;
	cnt_word = 0;
	while (str[i] != '\0')
	{
		if (ft_cond(str, i, charset) == 0)
			i++;
		else
		{
			cnt_char = 0;
			while (ft_cond(str, i, charset) == 1 && str[i] != '\0')
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

void	ft_putword_tab(char *str, char **tab, char *charset)
{
	int i;
	int cnt_char;
	int cnt_word;

	i = 0;
	cnt_word = 0;
	while (str[i] != '\0')
	{
		if (ft_cond(str, i, charset) == 0)
			i++;
		else
		{
			cnt_char = 0;
			while (ft_cond(str, i, charset) == 1 && str[i] != '\0')
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

char	**ft_split(char *str, char *charset)
{
	char **tab;

	if (!(tab = malloc(sizeof(*tab) * (ft_cnt_word(str, charset) + 1))))
		return (0);
	ft_malloc_word(str, tab, charset);
	ft_putword_tab(str, tab, charset);
	return (tab);
}
