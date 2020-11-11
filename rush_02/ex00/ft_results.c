/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   results.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 20:06:10 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/19 22:55:43 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_cond_colle(int num_colle, int w, int h, int *cnt_colle)
{
	cnt_colle++;
	ft_print_colle(num_colle, w, h, *cnt_colle);
}

void	ft_result(char *str, int w, int h)
{
	int		cnt_colle;
	char	*str_colle;

	cnt_colle = 0;
	str_colle = colle_00(w, h);
	if (ft_strcmp(str, str_colle) == 1)
		ft_cond_colle(0, w, h, &cnt_colle);
	str_colle = colle_01(w, h);
	if (ft_strcmp(str, str_colle) == 1)
		ft_cond_colle(1, w, h, &cnt_colle);
	str_colle = colle_02(w, h);
	if (ft_strcmp(str, str_colle) == 1)
		ft_cond_colle(2, w, h, &cnt_colle);
	str_colle = colle_03(w, h);
	if (ft_strcmp(str, str_colle) == 1)
		ft_cond_colle(3, w, h, &cnt_colle);
	str_colle = colle_04(w, h);
	if (ft_strcmp(str, str_colle) == 1)
		ft_cond_colle(4, w, h, &cnt_colle);
	if (cnt_colle == 0)
		ft_cond_colle(0, w, h, &cnt_colle);
}
