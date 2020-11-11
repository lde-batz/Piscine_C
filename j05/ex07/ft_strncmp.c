/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-batz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 13:54:09 by lde-batz          #+#    #+#             */
/*   Updated: 2018/08/07 15:24:58 by lde-batz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[x] == s2[x] && x < n - 1 && (s1[x] || s2[x]))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
